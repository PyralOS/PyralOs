#include <dpp/dpp.h>
#include <cstdlib>

int main() {
    dpp::cluster bot(std::getenv("BOT_TOKEN"));

    bot.on_log(dpp::utility::cout_logger());

    bot.on_ready([&bot](const dpp::ready_t& event) {
        if (dpp::run_once<struct register_bot_commands>()) {
            bot.global_command_create(
                dpp::slashcommand("contributors", "whole contributors list", bot.me.id)
            );
        }
    });
    bot.on_slashcommand([](const dpp::slashcommand_t& event) {
        if (event.command.get_command_name() == "contributors") {
            event.reply("mustardfrog, fuwwa, Game28, Darkvox, fake hecker, Load 72, Martell0x1, Prouddani, TinAD19tin");
        } else if (event.command.get_command_name() == "roadmap") {
            std::string content = dpp::utility::read_file("../../ROADMAP.md");

            if (content.empty()) {
                event.reply("Roadmap file has been didnt found");
            } else {
                event.reply(content);
            }
        }
    });
    bot.start(dpp::st_wait);

    return 0;
}
