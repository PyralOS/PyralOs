# PyralOS Wiki

The PyralOS Wiki is built with [Fumadocs](https://fumadocs.dev) on Next.js.

## Development

```bash
pnpm install
pnpm dev
```

Open [http://localhost:3000](http://localhost:3000) for the landing page, or
[http://localhost:3000/docs](http://localhost:3000/docs) for the documentation.

| Command            | Action                                        |
| ------------------ | --------------------------------------------- |
| `pnpm dev`         | Start the development server on port 3000     |
| `pnpm build`       | Export the static site to `out/`              |
| `pnpm start`       | Serve the exported site locally               |
| `pnpm types:check` | Generate Next.js types and type-check the app |

`next.config.mjs` reads `NEXT_PUBLIC_BASE_PATH` for the GitHub Pages subpath and
`NEXT_PUBLIC_SITE_URL` for absolute metadata URLs; the deployment workflow sets
both. For a local preview of the exported site, build without these variables.

## Writing docs

Pages live in `content/docs` as `.md` or `.mdx` files.
