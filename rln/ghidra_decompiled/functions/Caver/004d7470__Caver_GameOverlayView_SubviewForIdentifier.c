/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d7470
 * Function: Caver::GameOverlayView::SubviewForIdentifier
 * Signature: undefined __cdecl SubviewForIdentifier(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SubviewForIdentifier(std::string const&) */

void Caver::GameOverlayView::SubviewForIdentifier(string *param_1)

{
  undefined8 *puVar1;
  string *in_x1;
  undefined8 *in_x8;
  long lVar2;
  
  puVar1 = (undefined8 *)
           std::
           map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
           ::operator[]((map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIView>>>>
                         *)(param_1 + 0x108),in_x1);
  *in_x8 = *puVar1;
  lVar2 = puVar1[1];
  in_x8[1] = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return;
}


