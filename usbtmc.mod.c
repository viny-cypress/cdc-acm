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
	{ 0x1527b38f, "default_llseek" },
	{ 0xc7c4c313, "usb_deregister" },
	{ 0x24dfb53f, "usb_register_driver" },
	{ 0x72fa16a5, "usb_deregister_dev" },
	{ 0x3e4db22e, "sysfs_remove_group" },
	{ 0x85fb75f4, "usb_register_dev" },
	{ 0xfe31e381, "sysfs_create_group" },
	{ 0x3c743db9, "__mutex_init" },
	{ 0xc05ca4fa, "dev_set_drvdata" },
	{ 0x784ad94, "usb_get_dev" },
	{ 0x91715312, "sprintf" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x50eedeb8, "printk" },
	{ 0xc302e718, "dev_get_drvdata" },
	{ 0xf434fdeb, "usb_find_interface" },
	{ 0x681822ec, "usb_put_dev" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0x460a6565, "mutex_unlock" },
	{ 0x2bc95bd4, "memset" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x7dd48cec, "mutex_lock" },
	{ 0x6b3c14d7, "usb_bulk_msg" },
	{ 0x8e6d834d, "usb_clear_halt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9728b44d, "dev_err" },
	{ 0xddbf4a75, "usb_control_msg" },
	{ 0x2c9189e, "kmem_cache_alloc_trace" },
	{ 0x68c70c2d, "kmalloc_caches" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "2F7D8C07E68803736918D0F");
