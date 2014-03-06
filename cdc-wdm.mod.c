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
	{ 0x68c70c2d, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x76ebea8, "pv_lock_ops" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x71c60043, "usb_kill_urb" },
	{ 0x72fa16a5, "usb_deregister_dev" },
	{ 0xac4f2f2e, "usb_autopm_get_interface" },
	{ 0x460a6565, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x9728b44d, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x289ae517, "current_task" },
	{ 0xc7c4c313, "usb_deregister" },
	{ 0x8a91df1d, "mutex_lock_interruptible" },
	{ 0x3c743db9, "__mutex_init" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85fb75f4, "usb_register_dev" },
	{ 0x7dd48cec, "mutex_lock" },
	{ 0x5a253872, "noop_llseek" },
	{ 0x9756d61b, "_dev_info" },
	{ 0x4c39c9f6, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x4292364c, "schedule" },
	{ 0xf1faac3a, "_raw_spin_lock_irq" },
	{ 0x2c9189e, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0x24dfb53f, "usb_register_driver" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x8235805b, "memmove" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x32cbb004, "usb_free_urb" },
	{ 0x4353a66c, "usb_autopm_put_interface" },
	{ 0x5085c705, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*in*");

MODULE_INFO(srcversion, "C381F62243C2BD6285AEBF2");
