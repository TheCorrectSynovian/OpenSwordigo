/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cfb94
 * Function: Caver::ExperienceBar::SetExperience
 * Signature: undefined __thiscall SetExperience(ExperienceBar * this, int param_1, int param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::SetExperience(int, int, int, int) */

void __thiscall
Caver::ExperienceBar::SetExperience
          (ExperienceBar *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((*(int *)(this + 0x114) == param_1) && (*(int *)(this + 0x120) == param_4)) &&
     (*(int *)(this + 0x11c) == param_3)) {
    iVar1 = *(int *)(this + 0x118);
    *(int *)(this + 0x124) = param_2 - iVar1;
  }
  else {
    lVar3 = *(long *)(this + 0xf0);
    *(int *)(this + 0x114) = param_1;
    *(int *)(this + 0x11c) = param_3;
    *(int *)(this + 0x120) = param_4;
                    /* try { // try from 004cfc38 to 005cfc3b has its CatchHandler @ 004cfc4c */
    fVar6 = *(float *)(lVar3 + 0x124);
                    /* try { // try from 004cfc3c to 005cfc4f has its CatchHandler @ 004cfbf4 */
    fVar5 = (float)param_3;
    *(float *)(lVar3 + 0x134) = fVar5;
    if (fVar5 <= fVar6) {
      fVar7 = *(float *)(lVar3 + 0x128);
    }
    else {
                    /* catch() { ... } // from try @ 004cfc38 with catch @ 004cfc4c */
                    /* try { // try from 004cfc50 to 005cfc57 has its CatchHandler @ 004cfc60 */
                    /* try { // try from 004cfc58 to 005cfc63 has its CatchHandler @ 004cfbf4 */
      fVar7 = fVar5;
      if (*(char *)(lVar3 + 0x16c) != '\0') {
        fVar7 = (float)(int)fVar5;
      }
                    /* catch() { ... } // from try @ 004cfc50 with catch @ 004cfc60 */
      fVar6 = *(float *)(lVar3 + 0x138);
      if (fVar7 <= *(float *)(lVar3 + 0x138)) {
        fVar6 = fVar7;
      }
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
      *(undefined4 *)(lVar3 + 300) = 0;
      *(float *)(lVar3 + 0x124) = fVar6;
      *(float *)(lVar3 + 0x128) = fVar6;
      *(undefined1 *)(lVar3 + 0x160) = 1;
      fVar7 = fVar6;
    }
    if (fVar7 < fVar5) {
      if (*(char *)(lVar3 + 0x16c) != '\0') {
        fVar6 = (float)(int)fVar6;
      }
      fVar7 = *(float *)(lVar3 + 0x138);
      if (fVar6 <= *(float *)(lVar3 + 0x138)) {
        fVar7 = fVar6;
      }
      fVar6 = fVar7;
      if (fVar7 <= fVar5) {
        fVar6 = fVar5;
      }
                    /* try { // try from 004cfcd4 to 005cfcd7 has its CatchHandler @ 004cfcf0 */
                    /* try { // try from 004cfcd8 to 005cfcdf has its CatchHandler @ 004cfd04 */
      *(undefined4 *)(lVar3 + 300) = 0;
      *(float *)(lVar3 + 0x124) = fVar6;
      *(float *)(lVar3 + 0x128) = fVar6;
      *(undefined1 *)(lVar3 + 0x160) = 1;
      fVar7 = fVar6;
    }
                    /* catch() { ... } // from try @ 004cfcfc with catch @ 004cfc90 */
    fVar8 = (float)param_4;
                    /* catch() { ... } // from try @ 004cfcd4 with catch @ 004cfcf0 */
                    /* try { // try from 004cfcf4 to 005cfcfb has its CatchHandler @ 004cfd00 */
    *(undefined1 *)(lVar3 + 0x160) = 1;
    *(float *)(lVar3 + 0x138) = fVar8;
                    /* try { // try from 004cfcfc to 005cfd17 has its CatchHandler @ 004cfc90 */
    if (fVar8 < fVar6) {
                    /* catch() { ... } // from try @ 004cfcf4 with catch @ 004cfd00 */
                    /* catch() { ... } // from try @ 004cfcd8 with catch @ 004cfd04 */
      fVar7 = fVar8;
      if (*(char *)(lVar3 + 0x16c) != '\0') {
        fVar7 = (float)(int)fVar8;
      }
      fVar6 = fVar8;
      if (fVar7 <= fVar8) {
        fVar6 = fVar7;
      }
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
      *(undefined4 *)(lVar3 + 300) = 0;
      *(float *)(lVar3 + 0x124) = fVar6;
      *(float *)(lVar3 + 0x128) = fVar6;
      *(undefined1 *)(lVar3 + 0x160) = 1;
      fVar7 = fVar6;
    }
    if (fVar7 <= fVar8) {
      cVar2 = *(char *)(lVar3 + 0x16c);
    }
    else {
      cVar2 = *(char *)(lVar3 + 0x16c);
      if (cVar2 != '\0') {
        fVar6 = (float)(int)fVar6;
      }
      fVar7 = fVar8;
      if (fVar6 <= fVar8) {
        fVar7 = fVar6;
      }
      if (fVar7 <= fVar5) {
        fVar7 = fVar5;
      }
      *(undefined4 *)(lVar3 + 300) = 0;
      *(float *)(lVar3 + 0x124) = fVar7;
      *(float *)(lVar3 + 0x128) = fVar7;
      *(undefined1 *)(lVar3 + 0x160) = 1;
    }
    *(undefined1 *)(lVar3 + 0x160) = 1;
    fVar6 = fVar5;
    if (cVar2 != '\0') {
      fVar6 = (float)(int)fVar5;
    }
    if (fVar6 <= fVar8) {
      fVar8 = fVar6;
    }
    if (fVar8 <= fVar5) {
      fVar8 = fVar5;
    }
    *(undefined4 *)(lVar3 + 300) = 0;
    *(float *)(lVar3 + 0x124) = fVar8;
    *(float *)(lVar3 + 0x128) = fVar8;
    *(undefined1 *)(lVar3 + 0x160) = 1;
    iVar1 = *(int *)(this + 0x118);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004cfb18 with catch @ 004cfbdc
                        */
  if ((iVar1 < 0) && (this[0x3f9] != (ExperienceBar)0x0)) {
                    /* try { // try from 004cfbe0 to 005cfbe7 has its CatchHandler @ 004cfbf0 */
    lVar3 = *(long *)(this + 0xf0);
    *(int *)(this + 0x118) = param_2;
                    /* try { // try from 004cfbe8 to 005cfbf3 has its CatchHandler @ 004cfad0 */
    fVar6 = (float)param_2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004cfbe0 with catch @ 004cfbf0
                        */
                    /* catch() { ... } // from try @ 004cfc3c with catch @ 004cfbf4
                       catch() { ... } // from try @ 004cfc58 with catch @ 004cfbf4 */
    if (*(char *)(lVar3 + 0x16c) != '\0') {
      fVar6 = (float)(int)fVar6;
    }
    fVar5 = *(float *)(lVar3 + 0x138);
    if (fVar6 <= *(float *)(lVar3 + 0x138)) {
      fVar5 = fVar6;
    }
    if (fVar5 <= *(float *)(lVar3 + 0x134)) {
      fVar5 = *(float *)(lVar3 + 0x134);
    }
    *(undefined4 *)(lVar3 + 300) = 0;
    *(float *)(lVar3 + 0x124) = fVar5;
    *(float *)(lVar3 + 0x128) = fVar5;
    *(undefined1 *)(lVar3 + 0x160) = 1;
  }
  else {
    lVar3 = *(long *)(this + 0xf0);
    *(int *)(this + 0x118) = param_2;
    fVar5 = (float)param_2;
    fVar6 = *(float *)(lVar3 + 0x138);
    if (fVar5 <= *(float *)(lVar3 + 0x138)) {
      fVar6 = fVar5;
    }
    fVar5 = (fVar5 - *(float *)(lVar3 + 0x128)) / DAT_00684430;
    if (fVar6 <= *(float *)(lVar3 + 0x134)) {
      fVar6 = *(float *)(lVar3 + 0x134);
    }
    *(float *)(lVar3 + 0x124) = fVar6;
    *(float *)(lVar3 + 300) = fVar5;
  }
  UpdateText(this);
  if (this[0x3f8] != (ExperienceBar)0x0) {
    plVar4 = *(long **)(this + 0x408);
    *(undefined8 *)(this + 0x408) = 0;
    *(undefined8 *)(this + 0x400) = 0;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    GUIView::RemoveAllAnimations((GUIView *)this);
    this[0xe4] = (ExperienceBar)0x0;
  }
  return;
}


