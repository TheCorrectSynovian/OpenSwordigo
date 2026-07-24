/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00598130
 * Function: Caver::GUILabel::AddText
 * Signature: undefined __thiscall AddText(GUILabel * this, string * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::AddText(std::string const&, boost::shared_ptr<Caver::GradientColor> const&) */

void __thiscall Caver::GUILabel::AddText(GUILabel *this,string *param_1,shared_ptr *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 00598130 to 00698157 has its CatchHandler @ 00598170 */
  uVar1 = *(undefined8 *)param_2;
  lVar2 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(this + 0x120);
  if (lVar2 != 0) {
                    /* try { // try from 00598158 to 0069815f has its CatchHandler @ 00598184 */
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar4 = *(long **)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  *(long *)(lVar3 + 0x20) = lVar2;
                    /* catch() { ... } // from try @ 00598130 with catch @ 00598170 */
                    /* try { // try from 00598174 to 0069817b has its CatchHandler @ 00598180 */
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0059817c to 00698197 has its CatchHandler @ 005980f0 */
                    /* catch() { ... } // from try @ 00598174 with catch @ 00598180 */
                    /* catch() { ... } // from try @ 00598158 with catch @ 00598184 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  AddText(this,param_1);
  return;
}


