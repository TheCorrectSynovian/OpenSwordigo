/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00530184
 * Function: Caver::PortalView::~PortalView
 * Signature: undefined __thiscall ~PortalView(PortalView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::~PortalView() */

void __thiscall Caver::PortalView::~PortalView(PortalView *this)

{
  ~PortalView(this);
                    /* try { // try from 005301a0 to 006301a3 has its CatchHandler @ 005301b4 */
  operator_delete(this);
  return;
}


