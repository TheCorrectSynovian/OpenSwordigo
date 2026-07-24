/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d029c
 * Function: Caver::ExperienceBar::~ExperienceBar
 * Signature: undefined __thiscall ~ExperienceBar(ExperienceBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::~ExperienceBar() */

void __thiscall Caver::ExperienceBar::~ExperienceBar(ExperienceBar *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 004d029c to 005d02ab has its CatchHandler @ 004d01e8 */
                    /* catch() { ... } // from try @ 004d0294 with catch @ 004d02a4 */
                    /* catch() { ... } // from try @ 004d0268 with catch @ 004d02a8 */
                    /* try { // try from 004d02ac to 005d02f3 has its CatchHandler @ 004d02ac
                       catch(type#1 @ 00000000) { ... } // from try @ 004d02ac with catch @ 004d02ac
                       catch(type#1 @ 00000000) { ... } // from try @ 004d0310 with catch @ 004d02ac
                       catch(type#1 @ 00000000) { ... } // from try @ 004d0398 with catch @ 004d02ac
                        */
  plVar2 = *(long **)(this + 0x408);
  *(undefined **)this = PTR_vtable_007e7418 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
                    /* try { // try from 004d02f4 to 005d030f has its CatchHandler @ 004d038c */
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  FontText::~FontText((FontText *)(this + 0x308));
                    /* try { // try from 004d0310 to 005d038f has its CatchHandler @ 004d02ac */
  FontText::~FontText((FontText *)(this + 0x218));
  FontText::~FontText((FontText *)(this + 0x128));
  plVar2 = *(long **)(this + 0x108);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0xf8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d02f4 with catch @ 004d038c
                        */
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 004d0390 to 005d0397 has its CatchHandler @ 004d03a0 */
    lVar1 = plVar2[2];
                    /* try { // try from 004d0398 to 005d03a3 has its CatchHandler @ 004d02ac */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004d0390 with catch @ 004d03a0
                        */
                    /* catch() { ... } // from try @ 004d03f0 with catch @ 004d03a4
                       catch() { ... } // from try @ 004d0434 with catch @ 004d03a4 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


