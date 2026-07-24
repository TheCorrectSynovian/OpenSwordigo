/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b9b90
 * Function: Caver::GUITextFieldImpl::~GUITextFieldImpl
 * Signature: undefined __thiscall ~GUITextFieldImpl(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::~GUITextFieldImpl() */

void __thiscall Caver::GUITextFieldImpl::~GUITextFieldImpl(GUITextFieldImpl *this)

{
  ~GUITextFieldImpl(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b9b5c with catch @ 005b9bb0
                        */
  operator_delete(this);
  return;
}


