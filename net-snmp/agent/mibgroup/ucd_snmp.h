/* module to include the various ucd-snmp specific extension modules. */
config_require(ucd-snmp/proc)
config_require(ucd-snmp/versioninfo)
config_require(ucd-snmp/pass)
config_require(ucd-snmp/pass_persist)
config_require(ucd-snmp/disk)
config_require(ucd-snmp/loadave)
config_require(ucd-snmp/extensible)
config_require(ucd-snmp/errormib)
config_require(ucd-snmp/registry)
config_require(ucd-snmp/file)
config_require(ucd-snmp/dlmod)
config_require(ucd-snmp/proxy)
config_arch_require(linux, ucd-snmp/memory)
config_arch_require(hpux9, ucd-snmp/memory)
config_arch_require(hpux10, ucd-snmp/memory)
config_arch_require(solaris2, ucd-snmp/vmstat_solaris2)
config_arch_require(solaris2, ucd-snmp/memory_solaris2)
config_arch_require(hpux9, ucd-snmp/hpux)
config_arch_require(hpux10, ucd-snmp/hpux)
config_arch_require(bsdi2, ucd-snmp/memory)
config_arch_require(bsdi3, ucd-snmp/memory)
config_arch_require(bsdi4, ucd-snmp/memory)
config_arch_require(linux, ucd-snmp/vmstat)
config_arch_require(freebsd2, ucd-snmp/vmstat_freebsd2)
config_arch_require(freebsd2, ucd-snmp/memory_freebsd2)
config_arch_require(freebsd3, ucd-snmp/vmstat_freebsd2)
config_arch_require(freebsd3, ucd-snmp/memory_freebsd2)
config_arch_require(freebsd4, ucd-snmp/vmstat_freebsd2)
config_arch_require(freebsd4, ucd-snmp/memory_freebsd2)
config_arch_require(freebsd5, ucd-snmp/vmstat_freebsd2)
config_arch_require(freebsd5, ucd-snmp/memory_freebsd2)
config_arch_require(netbsd1, ucd-snmp/vmstat_netbsd1)
config_arch_require(netbsd1, ucd-snmp/memory_netbsd1)
config_arch_require(openbsd2, ucd-snmp/vmstat_netbsd1)
config_arch_require(openbsd2, ucd-snmp/memory_netbsd1)
config_arch_require(bsdi4, ucd-snmp/vmstat_bsdi4)
config_arch_require(darwin1, ucd-snmp/vmstat_freebsd2)
config_arch_require(darwin1, ucd-snmp/memory_freebsd2)
config_add_mib(UCD-SNMP-MIB) 
config_add_mib(UCD-DEMO-MIB) 
