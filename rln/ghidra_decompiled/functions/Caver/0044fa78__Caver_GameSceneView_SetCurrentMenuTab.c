/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044fa78
 * Function: Caver::GameSceneView::SetCurrentMenuTab
 * Signature: undefined __cdecl SetCurrentMenuTab(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::SetCurrentMenuTab(std::string const&) */

void Caver::GameSceneView::SetCurrentMenuTab(string *param_1)

{
                    /* try { // try from 0044fa84 to 0054fa9b has its CatchHandler @ 0044fa84
                       catch() { ... } // from try @ 0044fa84 with catch @ 0044fa84
                       catch() { ... } // from try @ 0044faa0 with catch @ 0044fa84 */
  FUN_0066a6a8(*(long *)(*(long *)(param_1 + 0xf0) + 8) + 400);
                    /* try { // try from 0044fa9c to 0054fa9f has its CatchHandler @ 0044fab0 */
                    /* try { // try from 0044faa0 to 0054fac3 has its CatchHandler @ 0044fa84 */
                    /* catch() { ... } // from try @ 0044fa9c with catch @ 0044fab0 */
  OverlayMenuButton::SetMenuTab(*(string **)(*(long *)(param_1 + 0x100) + 0x1c8));
  return;
}


