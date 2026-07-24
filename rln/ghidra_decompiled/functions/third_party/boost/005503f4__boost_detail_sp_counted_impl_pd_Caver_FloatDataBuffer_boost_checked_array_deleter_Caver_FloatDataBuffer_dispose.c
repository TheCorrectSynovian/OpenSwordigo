/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005503f4
 * Function: boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer*,
   boost::checked_array_deleter<Caver::FloatDataBuffer> >::dispose() */

void __thiscall
boost::detail::
sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>::
dispose(sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>
        *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + -8);
    if (lVar1 != 0) {
      lVar1 = lVar1 << 4;
      do {
        Caver::FloatDataBuffer::~FloatDataBuffer((FloatDataBuffer *)(lVar2 + lVar1 + -0x10));
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
    operator_delete__((long *)(lVar2 + -8));
    return;
  }
                    /* try { // try from 00550448 to 00650453 has its CatchHandler @ 00550540 */
  return;
}


