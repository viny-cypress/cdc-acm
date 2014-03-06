#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15b2dc7b, "module_layout" },
	{ 0x5a253872, "noop_llseek" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xc7c4c313, "usb_deregister" },
	{ 0x24dfb53f, "usb_register_driver" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x9756d61b, "_dev_info" },
	{ 0x85fb75f4, "usb_register_dev" },
	{ 0x2c1f8706, "device_create_file" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x3c743db9, "__mutex_init" },
	{ 0x2c9189e, "kmem_cache_alloc_trace" },
	{ 0x68c70c2d, "kmalloc_caches" },
	{ 0xac4f2f2e, "usb_autopm_get_interface" },
	{ 0xf434fdeb, "usb_find_interface" },
	{ 0x4353a66c, "usb_autopm_put_interface" },
	{ 0x4292364c, "schedule" },
	{ 0x3a013b7d, "remove_wait_queue" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x8a91df1d, "mutex_lock_interruptible" },
	{ 0xd7bd3af2, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x289ae517, "current_task" },
	{ 0x81c244fe, "usb_unanchor_urb" },
	{ 0x4c39c9f6, "usb_submit_urb" },
	{ 0xee8cc283, "usb_anchor_urb" },
	{ 0x5085c705, "usb_alloc_urb" },
	{ 0xc05ca4fa, "dev_set_drvdata" },
	{ 0xe464887b, "device_remove_file" },
	{ 0x72fa16a5, "usb_deregister_dev" },
	{ 0x91715312, "sprintf" },
	{ 0xc302e718, "dev_get_drvdata" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x733c3b54, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c4db1b5, "usb_kill_anchored_urbs" },
	{ 0x9728b44d, "dev_err" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb0207ecf, "___ratelimit" },
	{ 0x460a6565, "mutex_unlock" },
	{ 0x7dd48cec, "mutex_lock" },
	{ 0xddbf4a75, "usb_control_msg" },
	{ 0x594aa449, "usb_set_interface" },
	{ 0x50eedeb8, "printk" },
	{ 0x32cbb004, "usb_free_urb" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BD8A318D5C286F1E78768B9");
