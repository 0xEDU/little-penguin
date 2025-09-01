#include <linux/module.h>
#include <linux/printk.h>

// Module metadata
MODULE_LICENSE("GPL");

static int __init mod_init(void)
{
	pr_info("Hello world!\n");

	return 0;
}

static void __exit mod_exit(void)
{
	pr_info("Cleaning up module.\n");
}

module_init(mod_init);
module_exit(mod_exit);
