/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049566c
 * Function: Caver::MainMenuView::~MainMenuView
 * Signature: undefined __thiscall ~MainMenuView(MainMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::~MainMenuView() */

void __thiscall Caver::MainMenuView::~MainMenuView(MainMenuView *this)

{
  ~MainMenuView(this);
                    /* try { // try from 00495688 to 00595693 has its CatchHandler @ 0049521c */
  operator_delete(this);
  return;
}


