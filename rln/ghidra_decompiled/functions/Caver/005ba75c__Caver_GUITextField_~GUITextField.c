/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba75c
 * Function: Caver::GUITextField::~GUITextField
 * Signature: undefined __thiscall ~GUITextField(GUITextField * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextField::~GUITextField() */

void __thiscall Caver::GUITextField::~GUITextField(GUITextField *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5ba760);
  (*pcVar1)();
}


