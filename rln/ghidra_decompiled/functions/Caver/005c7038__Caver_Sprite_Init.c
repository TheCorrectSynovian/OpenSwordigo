/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7038
 * Function: Caver::Sprite::Init
 * Signature: undefined __thiscall Init(Sprite * this, intrusive_ptr * param_1, int param_2, int param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&, int, int, bool) */

void __thiscall
Caver::Sprite::Init(Sprite *this,intrusive_ptr *param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  
  lVar5 = *(long *)param_1;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  }
  plVar2 = *(long **)this;
  *(long *)this = lVar5;
  if ((plVar2 != (long *)0x0) &&
     (iVar4 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  iVar4 = 0x18;
  if (!param_4) {
    iVar4 = 0x14;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x50] = (Sprite)param_4;
  *(undefined4 *)(this + 0x2c) = 0;
  *(int *)(this + 0x30) = iVar4;
  if (*(int *)(this + 0x28) != param_3) {
    uVar6 = (ulong)(iVar4 * param_3);
    if ((long)uVar6 < 0) {
      uVar6 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar6);
    pvVar7 = *(void **)(this + 0x38);
    *(void **)(this + 0x38) = pvVar3;
                    /* catch() { ... } // from try @ 005c6798 with catch @ 005c70e4 */
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      pvVar3 = *(void **)(this + 0x38);
      param_4 = *(bool *)(this + 0x50);
    }
    lVar5 = (long)pvVar3 + 0xc;
    *(int *)(this + 0x28) = param_3;
    if ((Sprite)param_4 != (Sprite)0x0) {
      *(long *)(this + 0x40) = lVar5;
                    /* try { // try from 005c7108 to 006c717f has its CatchHandler @ 005c7650 */
      lVar5 = (long)pvVar3 + 0x10;
    }
    *(long *)(this + 0x48) = lVar5;
  }
  if (*(int *)(this + 0x18) != param_2) {
    if (param_2 < 1) {
      pvVar3 = *(void **)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
    }
    else {
      uVar8 = (ulong)(param_2 * 3);
      uVar6 = uVar8 * 2;
      if (CARRY8(uVar8,uVar8)) {
        uVar6 = 0xffffffffffffffff;
      }
                    /* catch() { ... } // from try @ 005c66e8 with catch @ 005c7134 */
      pvVar7 = operator_new__(uVar6);
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 < 1) {
                    /* catch() { ... } // from try @ 005c7014 with catch @ 005c7188 */
        pvVar3 = *(void **)(this + 0x20);
        *(void **)(this + 0x20) = pvVar7;
      }
      else {
        pvVar3 = *(void **)(this + 0x20);
        iVar1 = param_2;
        if (iVar4 <= param_2) {
          iVar1 = iVar4;
        }
        memcpy(pvVar7,pvVar3,
               -(ulong)((uint)(iVar1 * 3) >> 0x1f) & 0xfffffffe00000000 |
               (ulong)(uint)(iVar1 * 3) << 1);
        *(void **)(this + 0x20) = pvVar7;
      }
    }
                    /* try { // try from 005c7180 to 006c71ab has its CatchHandler @ 005c6574 */
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(int *)(this + 0x18) = param_2;
  }
                    /* try { // try from 005c71ac to 006c71d3 has its CatchHandler @ 005c7650 */
  return;
}


