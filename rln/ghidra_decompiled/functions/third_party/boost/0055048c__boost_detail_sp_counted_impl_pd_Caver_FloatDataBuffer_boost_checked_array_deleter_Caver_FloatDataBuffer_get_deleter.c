/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055048c
 * Function: boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>::get_deleter
 * Signature: undefined __thiscall get_deleter(sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>> * this, type_info * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer*,
   boost::checked_array_deleter<Caver::FloatDataBuffer> >::get_deleter(std::type_info const&) */

sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>> *
__thiscall
boost::detail::
sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>::
get_deleter(sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>
            *this,type_info *param_1)

{
  int iVar1;
  sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>
  *psVar2;
  char *__s1;
  
  __s1 = *(char **)(param_1 + 8);
  if ((__s1 == PTR_typeinfo_name_007e71d8) ||
     ((*__s1 != '*' && (iVar1 = strcmp(__s1,PTR_typeinfo_name_007e71d8), iVar1 == 0)))) {
    psVar2 = this + 0x20;
  }
  else {
    psVar2 = (sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>
              *)0x0;
  }
  return psVar2;
}


