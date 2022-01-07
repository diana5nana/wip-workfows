#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb602b2d, "module_layout" },
	{ 0x365053cd, "devlink_port_register" },
	{ 0x8487a2b6, "flush_work" },
	{ 0x6e2361b, "alloc_pages_current" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbda6271c, "neigh_lookup" },
	{ 0xfb3fb749, "device_remove_file" },
	{ 0x1219bd34, "cdev_del" },
	{ 0x3e9aa139, "netdev_info" },
	{ 0x5a629faf, "kmalloc_caches" },
	{ 0xa31ecb85, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x7636f949, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb22c06d4, "skb_clone_tx_timestamp" },
	{ 0x94b8945c, "rht_bucket_nested" },
	{ 0x5316fb76, "pci_enable_sriov" },
	{ 0x63617605, "devm_ioremap_nocache" },
	{ 0x75cd5a8, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0xe1f2f260, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x96b7dc95, "param_ops_int" },
	{ 0x8f86e18a, "devlink_sb_unregister" },
	{ 0xe967ece, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0x2d536c8c, "pci_sriov_set_totalvfs" },
	{ 0xf93d265, "napi_consume_skb" },
	{ 0x4c73dd18, "napi_schedule_prep" },
	{ 0xfd2211d, "__napi_schedule_irqoff" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x48f64ee4, "bpf_map_inc" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7ae5ad74, "sme_active" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc1aaa72d, "dev_printk" },
	{ 0x84e380cd, "single_release" },
	{ 0x1eb52985, "xdp_rxq_info_reg" },
	{ 0x11b850e1, "seq_puts" },
	{ 0x91db9196, "boot_cpu_data" },
	{ 0x3a08cf69, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbda77cd1, "arp_tbl" },
	{ 0xb7f5f456, "pci_disable_msix" },
	{ 0x162313e8, "hwmon_device_unregister" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xec3bcfc8, "netif_carrier_on" },
	{ 0xe9535ada, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x92f2ce5, "metadata_dst_alloc" },
	{ 0x33b2381d, "pci_disable_sriov" },
	{ 0x7dd375e4, "skb_clone" },
	{ 0x6cc2c929, "bpf_event_output" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x5c37f68a, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xbcf95965, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1832442e, "device_destroy" },
	{ 0xf67ac127, "netdev_master_upper_dev_get_rcu" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9558af0d, "xdp_rxq_info_unreg" },
	{ 0xfd92e450, "pcie_print_link_status" },
	{ 0x601602d1, "call_netdevice_notifiers" },
	{ 0xad491d9c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6dae439, "pci_release_regions" },
	{ 0xea4c05be, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf6c1256d, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe847520f, "ida_simple_get" },
	{ 0x2dcd3ef2, "devlink_alloc" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xb946974a, "neigh_destroy" },
	{ 0x95fe07f4, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x91715312, "sprintf" },
	{ 0xaefab474, "rhashtable_insert_slow" },
	{ 0xca3c5321, "debugfs_remove_recursive" },
	{ 0x42d29b2d, "seq_read" },
	{ 0x53cb1ce3, "__alloc_pages_nodemask" },
	{ 0xeaf9e3ee, "__tracepoint_devlink_hwmsg" },
	{ 0xc4e4bd20, "dev_queue_xmit_nit" },
	{ 0x2ab20138, "__platform_driver_register" },
	{ 0xbbf16bfa, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x5f578188, "__dynamic_netdev_dbg" },
	{ 0x4841bdee, "strnchr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2e5bd170, "__neigh_event_send" },
	{ 0x1dc3dc55, "rhashtable_destroy" },
	{ 0x99070db4, "__netdev_alloc_skb" },
	{ 0x931619eb, "netif_rx" },
	{ 0x5461f15d, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4054b69, "pci_set_master" },
	{ 0x394dbc7c, "netif_schedule_queue" },
	{ 0x1f8c0dd5, "rht_bucket_nested_insert" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xde97d5f6, "skb_queue_purge" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x98b07708, "rhashtable_free_and_destroy" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xf65e4f09, "netif_tx_wake_queue" },
	{ 0x3f3dc96d, "device_register" },
	{ 0x5a6a4d81, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe912de6a, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf59d91d, "netif_set_xps_queue" },
	{ 0x27e1a049, "printk" },
	{ 0x37ab3989, "ethtool_op_get_link" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x17f47180, "platform_device_alloc" },
	{ 0xd61a31e5, "ida_simple_remove" },
	{ 0x2ad666d2, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xb0be486, "register_netdev" },
	{ 0xb5734851, "platform_device_add" },
	{ 0xa880ef97, "netif_receive_skb" },
	{ 0xcfdd6a3a, "seq_putc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0xe7c7ffaa, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb1902e38, "netdev_printk" },
	{ 0x4aad8b44, "netif_set_real_num_rx_queues" },
	{ 0x46b0fde, "device_create" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6023b4f3, "platform_device_unregister" },
	{ 0xe2c80f0, "netif_set_real_num_tx_queues" },
	{ 0x94e65d23, "netif_napi_add" },
	{ 0x7d1bb1d4, "tnum_strn" },
	{ 0x5cc67130, "hwmon_device_register_with_info" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xe3a53f4c, "sort" },
	{ 0xd6beba26, "init_net" },
	{ 0x4e4873e5, "devlink_port_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x4cfea80c, "param_ops_bint" },
	{ 0xe392af4d, "build_skb" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0x75d15c16, "device_create_file" },
	{ 0x14999dde, "cdev_add" },
	{ 0x4e156010, "arch_dma_alloc_attrs" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3d225c92, "skb_queue_tail" },
	{ 0x6270a8b, "bpf_verifier_log_write" },
	{ 0xe956d9b3, "napi_gro_receive" },
	{ 0x9138373, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xf8971711, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x99b476b0, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0x546896bd, "pci_enable_msix_range" },
	{ 0x63694992, "eth_prepare_mac_addr_change" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xc49f7e71, "put_device" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x164e7c53, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x150250eb, "kfree_skb" },
	{ 0xea5a52b0, "switchdev_port_same_parent_id" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x1d800e5d, "alloc_netdev_mqs" },
	{ 0x17616604, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xde89d00b, "request_firmware_direct" },
	{ 0xac1dd1a, "pci_read_config_dword" },
	{ 0xff114af3, "eth_type_trans" },
	{ 0x4ff30d6e, "pskb_expand_head" },
	{ 0x8842a99, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6313e1, "netdev_err" },
	{ 0xc1bf915b, "eth_commit_mac_addr_change" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xb3c46c13, "pci_unregister_driver" },
	{ 0xad7733c2, "ether_setup" },
	{ 0x2f2e0085, "tc_setup_cb_egdev_register" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa3f26f9b, "bpf_map_put" },
	{ 0x3a4a5966, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c14c89a, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4d09876a, "ip_route_output_flow" },
	{ 0x1e01660e, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1b2a2fc1, "netdev_warn" },
	{ 0xfe19873b, "tc_setup_cb_egdev_unregister" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x12056eb2, "zap_vma_ptes" },
	{ 0x663a3eeb, "rhashtable_init" },
	{ 0xab39e926, "devlink_free" },
	{ 0x2c0e138e, "tcf_block_cb_unregister" },
	{ 0x5f9f7ded, "seq_lseek" },
	{ 0x1ac0fc23, "devlink_port_type_clear" },
	{ 0xa6bdfb3d, "devlink_register" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x8444ec30, "devlink_sb_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0xebf6a7de, "pci_request_regions" },
	{ 0xc3a6e1c1, "crc32_be" },
	{ 0xecd74883, "send_sig_info" },
	{ 0x5c2c189c, "devlink_port_attrs_set" },
	{ 0xd150db5f, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x9d6020b5, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xa212c142, "class_destroy" },
	{ 0xa2f571bf, "request_firmware" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd44784f3, "dev_warn" },
	{ 0x1d1463c7, "device_unregister" },
	{ 0x1fc2baf5, "unregister_netdev" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x4fa540dd, "devm_iounmap" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0x5a4eebde, "pci_vfs_assigned" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2ddcfb49, "netdev_update_features" },
	{ 0x25c435b5, "debugfs_real_fops" },
	{ 0x50e1c5a7, "platform_driver_unregister" },
	{ 0x2ab797f2, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0x31ccee06, "dev_queue_xmit" },
	{ 0x9ede66f0, "skb_tstamp_tx" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x7858409d, "skb_put" },
	{ 0x6635e788, "pci_enable_device" },
	{ 0x68163464, "eth_mac_addr" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0x9e3ee39e, "param_ops_uint" },
	{ 0x599b938f, "__class_create" },
	{ 0xe013f905, "ida_destroy" },
	{ 0xa8be3c87, "devlink_unregister" },
	{ 0x8dd15728, "bpf_prog_put" },
	{ 0x1ec5651b, "pci_find_ext_capability" },
	{ 0xd4ab788f, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3aedd3a2, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x1588efbb, "tcf_block_cb_register" },
	{ 0xfedca00b, "devlink_port_type_eth_set" },
	{ 0xed15d150, "vm_insert_pfn" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x932503ad, "dev_set_mtu" },
	{ 0x5781b8ec, "platform_device_put" },
	{ 0x32a98cd2, "alloc_etherdev_mqs" },
	{ 0xdc34a927, "__tracepoint_xdp_exception" },
	{ 0x8a35b432, "sme_me_mask" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=devlink";

MODULE_ALIAS("pci:v000019EEd00003800sv000019EEsd*bc*sc*i*");
MODULE_ALIAS("pci:v000019EEd00004000sv000019EEsd*bc*sc*i*");
MODULE_ALIAS("pci:v000019EEd00005000sv000019EEsd*bc*sc*i*");
MODULE_ALIAS("pci:v000019EEd00006000sv000019EEsd*bc*sc*i*");
MODULE_ALIAS("pci:v000019EEd00003803sv000019EEsd*bc*sc*i*");
MODULE_ALIAS("pci:v000019EEd00006003sv000019EEsd*bc*sc*i*");

MODULE_INFO(srcversion, "F8594CF61D0F6BB5C4662BC");
