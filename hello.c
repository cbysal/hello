#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int __init hello_init(void) {
    printk("init hello\n");
    return 0;
}

static void __exit hello_exit(void) { printk("exit hello\n"); }

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
