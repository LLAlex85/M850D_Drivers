#include <linux/module.h>


static int __init dcss_init(void)
{

	pr_info("Hello from DCSS Init\n");
	return 0;
}



static int __exit dcss_exit(void)
{

	pr_info("Good Bye from DCSS module\n");
	return 0;
}

module_init(dcss_init);
module_exit(dcss_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alejandro Lozano alejandro.lozano@nxp.com");
MODULE_DESCRIPTION("This is the first HDR10 DCSS version");
