#include <linux/module.h>

static int __init dummy_init(void)
{
	pr_info("dummy driver loaded\n");
	return 0;
}

static void __exit dummy_exit(void)
{
	pr_info("dummy driver unloaded\n");
}

module_init(dummy_init);
module_exit(dummy_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eduardo Maestri Righes");
MODULE_DESCRIPTION("Dummy driver example");

