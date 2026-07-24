/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00549360
 * Function: boost::detail::sp_counted_impl_p<Caver::MeshInstance>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::MeshInstance> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::MeshInstance>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::MeshInstance>::dispose
          (sp_counted_impl_p<Caver::MeshInstance> *this)

{
  MeshInstance *this_00;
  
  this_00 = *(MeshInstance **)(this + 0x18);
  if (this_00 != (MeshInstance *)0x0) {
    Caver::MeshInstance::~MeshInstance(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


