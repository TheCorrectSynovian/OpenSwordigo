/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058ef74
 * Function: boost::detail::sp_counted_impl_p<Caver::RenderingProgram>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::RenderingProgram> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::RenderingProgram>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::RenderingProgram>::dispose
          (sp_counted_impl_p<Caver::RenderingProgram> *this)

{
  RenderingProgram *this_00;
  
                    /* try { // try from 0058ef74 to 0068ef7b has its CatchHandler @ 005912b8 */
  this_00 = *(RenderingProgram **)(this + 0x18);
  if (this_00 != (RenderingProgram *)0x0) {
    Caver::RenderingProgram::~RenderingProgram(this_00);
                    /* try { // try from 0058ef9c to 0068efab has its CatchHandler @ 00592708 */
    operator_delete(this_00);
    return;
  }
  return;
}


