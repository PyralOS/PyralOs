import Link from 'next/link';
import { buttonVariants } from 'fumadocs-ui/components/ui/button';
import { cn } from '@/lib/cn';

export default function HomePage() {
  return (
    <main className="flex flex-1 flex-col items-center justify-center px-6 py-24 text-center">
      <h1 className="text-4xl font-bold tracking-tight sm:text-5xl">PyralOS Wiki</h1>
      <p className="mt-4 max-w-xl text-lg text-fd-muted-foreground">
        The up-and-coming mobile Linux OS
      </p>
      <div className="mt-8 flex flex-wrap justify-center gap-3">
        <Link
          href="/docs/other/learn-more"
          className={cn(buttonVariants({ variant: 'primary' }), 'px-4 py-2.5')}>
          Learn more about the project
        </Link>
        <Link
          href="/docs/introduction"
          className={cn(buttonVariants({ variant: 'outline' }), 'px-4 py-2.5')}>
          Read the introduction
        </Link>
      </div>
    </main>
  );
}
