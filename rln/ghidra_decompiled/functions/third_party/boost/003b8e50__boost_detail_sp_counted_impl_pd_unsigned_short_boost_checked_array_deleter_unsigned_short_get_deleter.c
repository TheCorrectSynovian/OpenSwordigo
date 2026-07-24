/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8e50
 * Function: boost::detail::sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>>::get_deleter
 * Signature: undefined __thiscall get_deleter(sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>> * this, type_info * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_pd<unsigned short*, boost::checked_array_deleter<unsigned short>
   >::get_deleter(std::type_info const&) */

sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>> * __thiscall
boost::detail::sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>>::
get_deleter(sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>> *this,
           type_info *param_1)

{
  int iVar1;
  sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>> *psVar2;
  char *__s1;
  
  __s1 = *(char **)(param_1 + 8);
  if ((__s1 == PTR_typeinfo_name_007e7d08) ||
     ((*__s1 != '*' && (iVar1 = strcmp(__s1,PTR_typeinfo_name_007e7d08), iVar1 == 0)))) {
    psVar2 = this + 0x20;
  }
  else {
    psVar2 = (sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>> *)0x0
    ;
  }
  return psVar2;
}


