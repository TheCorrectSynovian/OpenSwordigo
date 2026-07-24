/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b92c
 * Function: boost::bad_lexical_cast::~bad_lexical_cast
 * Signature: undefined __thiscall ~bad_lexical_cast(bad_lexical_cast * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::bad_lexical_cast::~bad_lexical_cast() */

void __thiscall boost::bad_lexical_cast::~bad_lexical_cast(bad_lexical_cast *this)

{
                    /* try { // try from 0056b93c to 0066ba8b has its CatchHandler @ 0056b51c */
  std::bad_cast::~bad_cast((bad_cast *)this);
  operator_delete(this);
  return;
}


