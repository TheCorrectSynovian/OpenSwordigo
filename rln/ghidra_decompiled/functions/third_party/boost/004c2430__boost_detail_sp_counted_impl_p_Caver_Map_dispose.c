/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c2430
 * Function: boost::detail::sp_counted_impl_p<Caver::Map>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Map> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Map>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Map>::dispose(sp_counted_impl_p<Caver::Map> *this)

{
  Map *this_00;
  
  this_00 = *(Map **)(this + 0x18);
  if (this_00 != (Map *)0x0) {
    Caver::Map::~Map(this_00);
    operator_delete(this_00);
    return;
  }
                    /* try { // try from 004c2460 to 005c272b has its CatchHandler @ 004c22e8 */
  return;
}


