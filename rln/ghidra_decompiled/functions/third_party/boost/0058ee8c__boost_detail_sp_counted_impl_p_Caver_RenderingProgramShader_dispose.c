/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058ee8c
 * Function: boost::detail::sp_counted_impl_p<Caver::RenderingProgramShader>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::RenderingProgramShader> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::RenderingProgramShader>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::RenderingProgramShader>::dispose
          (sp_counted_impl_p<Caver::RenderingProgramShader> *this)

{
  RenderingProgramShader *this_00;
  
  this_00 = *(RenderingProgramShader **)(this + 0x18);
  if (this_00 != (RenderingProgramShader *)0x0) {
    Caver::RenderingProgramShader::~RenderingProgramShader(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}


