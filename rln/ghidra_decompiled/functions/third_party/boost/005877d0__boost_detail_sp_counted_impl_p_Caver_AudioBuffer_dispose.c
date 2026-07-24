/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005877d0
 * Function: boost::detail::sp_counted_impl_p<Caver::AudioBuffer>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::AudioBuffer> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::AudioBuffer>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::AudioBuffer>::dispose
          (sp_counted_impl_p<Caver::AudioBuffer> *this)

{
  AudioBuffer *this_00;
  
  this_00 = *(AudioBuffer **)(this + 0x18);
  if (this_00 != (AudioBuffer *)0x0) {
    Caver::AudioBuffer::~AudioBuffer(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


