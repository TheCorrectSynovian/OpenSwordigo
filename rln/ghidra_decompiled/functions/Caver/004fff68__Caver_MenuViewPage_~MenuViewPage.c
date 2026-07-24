/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004fff68
 * Function: Caver::MenuViewPage::~MenuViewPage
 * Signature: undefined __thiscall ~MenuViewPage(MenuViewPage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuViewPage::~MenuViewPage() */

void __thiscall Caver::MenuViewPage::~MenuViewPage(MenuViewPage *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4fff6c);
  (*pcVar1)();
}


