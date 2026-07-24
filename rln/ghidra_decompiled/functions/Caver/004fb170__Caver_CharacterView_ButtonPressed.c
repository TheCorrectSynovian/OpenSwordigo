/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004fb170
 * Function: Caver::CharacterView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::CharacterView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
                    /* try { // try from 004fb170 to 005fb17b has its CatchHandler @ 004fb0e0 */
                    /* catch() { ... } // from try @ 004fb158 with catch @ 004fb178 */
                    /* try { // try from 004fb17c to 005fb1c3 has its CatchHandler @ 004fb17c
                       catch(type#1 @ 00000000) { ... } // from try @ 004fb17c with catch @ 004fb17c
                       catch(type#1 @ 00000000) { ... } // from try @ 004fb1e0 with catch @ 004fb17c
                       catch(type#1 @ 00000000) { ... } // from try @ 004fb314 with catch @ 004fb17c
                        */
  if (*(GUIEvent **)((long)param_1 + 0x118) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x004fb1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x130))(param_1);
    return;
  }
  if (*(GUIEvent **)((long)param_1 + 0x128) != param_2) {
    return;
  }
                    /* try { // try from 004fb1c4 to 005fb1df has its CatchHandler @ 004fb308 */
  AttributePointsView::SetNumPoints
            (*(AttributePointsView **)((long)param_1 + 0x158),
             *(int *)(*(AttributePointsView **)((long)param_1 + 0x158) + 0xfc));
  AttributePointsView::SetNumPoints
            (*(AttributePointsView **)((long)param_1 + 0x168),
             *(int *)(*(AttributePointsView **)((long)param_1 + 0x168) + 0xfc));
  AttributePointsView::SetNumPoints
            (*(AttributePointsView **)((long)param_1 + 0x178),
             *(int *)(*(AttributePointsView **)((long)param_1 + 0x178) + 0xfc));
                    /* try { // try from 004fb1e0 to 005fb30b has its CatchHandler @ 004fb17c */
  UpdateAvailablePoints(param_1);
  return;
}


