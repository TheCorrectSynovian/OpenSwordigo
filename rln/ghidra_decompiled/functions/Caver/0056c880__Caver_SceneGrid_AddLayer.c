/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056c880
 * Function: Caver::SceneGrid::AddLayer
 * Signature: undefined __thiscall AddLayer(SceneGrid * this, float param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::AddLayer(float, float, float, float) */

void __thiscall
Caver::SceneGrid::AddLayer(SceneGrid *this,float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  SceneGridLayer *__s;
  int iVar2;
  long lVar3;
  long *plVar4;
  SceneGridLayer *local_68;
  long *local_60;
  long local_58;
  
                    /* try { // try from 0056c890 to 0066c8a3 has its CatchHandler @ 0056ca4c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0056c8a4 to 0066c8af has its CatchHandler @ 0056c9dc */
                    /* try { // try from 0056c8b0 to 0066ca57 has its CatchHandler @ 0056c584 */
  __s = operator_new(0x158);
  memset(__s,0,0x49);
  *(undefined4 *)(__s + 0x78) = 0xff000000;
  __s[0x94] = (SceneGridLayer)0xff;
  *(undefined8 *)(__s + 0x50) = 0;
  *(undefined4 *)(__s + 0x90) = 0;
  *(undefined4 *)(__s + 0xf0) = 0;
  __s[0x110] = (SceneGridLayer)0x0;
  *(undefined8 *)(__s + 0x108) = 0;
  *(undefined4 *)(__s + 0xb8) = 0;
  *(undefined8 *)(__s + 0x70) = 0;
  *(undefined8 *)(__s + 0x68) = 0;
  *(undefined8 *)(__s + 0x60) = 0;
  *(undefined8 *)(__s + 0x58) = 0;
  *(undefined8 *)(__s + 0x88) = 0;
  *(undefined8 *)(__s + 0x80) = 0;
  *(undefined8 *)(__s + 0xd8) = 0;
  *(undefined8 *)(__s + 0xd0) = 0;
  *(undefined8 *)(__s + 0xe8) = 0;
  *(undefined8 *)(__s + 0xe0) = 0;
  *(undefined8 *)(__s + 200) = 0;
  *(undefined8 *)(__s + 0xc0) = 0;
  *(undefined8 *)(__s + 0x100) = 0;
  *(undefined8 *)(__s + 0xf8) = 0;
  *(undefined8 *)(__s + 0xb0) = 0;
  *(undefined8 *)(__s + 0xa8) = 0;
  *(undefined8 *)(__s + 0xa0) = 0;
  *(undefined8 *)(__s + 0x98) = 0;
  *(undefined8 *)(__s + 0x140) = 0;
  *(undefined8 *)(__s + 0x138) = 0;
  *(undefined8 *)(__s + 0x120) = 0;
  *(undefined8 *)(__s + 0x118) = 0;
  *(undefined8 *)(__s + 0x130) = 0;
  *(undefined8 *)(__s + 0x128) = 0;
  *(undefined8 *)(__s + 0x148) = 0;
  *(undefined4 *)(__s + 0x150) = 0xffffffff;
  local_68 = __s;
                    /* catch() { ... } // from try @ 0056c82c with catch @ 0056c954 */
  boost::detail::shared_count::shared_count<Caver::SceneGridLayer>((shared_count *)&local_60,__s);
  boost::detail::sp_enable_shared_from_this(&local_68,__s,__s);
  SceneGridLayer::Init(local_68,(Rectangle *)(this + 0x10),param_3,param_4,param_1,param_2);
  iVar2 = *(int *)this;
  if (*(int *)(this + 4) <= iVar2) {
    iVar2 = *(int *)(this + 4) * 2;
                    /* catch() { ... } // from try @ 0056c7d0 with catch @ 0056c994 */
    if (iVar2 < 0xb) {
      iVar2 = 10;
    }
    FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize
              ((FastVector<boost::shared_ptr<Caver::SceneGridLayer>> *)this,iVar2);
    iVar2 = *(int *)this;
  }
  lVar3 = *(long *)(this + 8);
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  *(SceneGridLayer **)(lVar3 + (long)iVar2 * 0x10) = local_68;
  lVar3 = lVar3 + (long)iVar2 * 0x10;
                    /* catch() { ... } // from try @ 0056c818 with catch @ 0056c9d4 */
  plVar4 = *(long **)(lVar3 + 8);
                    /* catch() { ... } // from try @ 0056c7bc with catch @ 0056c9d8 */
  *(long **)(lVar3 + 8) = local_60;
                    /* catch() { ... } // from try @ 0056c8a4 with catch @ 0056c9dc */
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  *(int *)this = *(int *)this + 1;
  if ((local_60 != (long *)0x0) && (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0056c890 with catch @ 0056ca4c */
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar3 = local_60[2];
                    /* try { // try from 0056ca58 to 0066cabf has its CatchHandler @ 0056ca58
                       catch() { ... } // from try @ 0056ca58 with catch @ 0056ca58
                       catch() { ... } // from try @ 0056cae4 with catch @ 0056ca58 */
    local_60[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


