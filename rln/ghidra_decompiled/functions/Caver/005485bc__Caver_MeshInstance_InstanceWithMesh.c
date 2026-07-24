/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005485bc
 * Function: Caver::MeshInstance::InstanceWithMesh
 * Signature: undefined __thiscall InstanceWithMesh(MeshInstance * this, shared_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshInstance::InstanceWithMesh(boost::shared_ptr<Caver::Mesh> const&, bool) */

void __thiscall
Caver::MeshInstance::InstanceWithMesh(MeshInstance *this,shared_ptr *param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  MeshInstance *pMVar3;
  long *in_x8;
  long lVar4;
  long *plVar5;
  long lVar6;
  MeshInstance *local_68;
  long *plStack_60;
  long local_58;
  
                    /* try { // try from 005485d4 to 006485d7 has its CatchHandler @ 00548634 */
                    /* try { // try from 005485d8 to 00648653 has its CatchHandler @ 00548568 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  if (((ulong)param_1 & 1) == 0) {
    pMVar3 = operator_new(0xc0);
    MeshInstance(pMVar3);
                    /* try { // try from 0054867c to 00648687 has its CatchHandler @ 00548568 */
    local_68 = pMVar3;
                    /* catch() { ... } // from try @ 00548654 with catch @ 00548684 */
                    /* catch() { ... } // from try @ 005487d0 with catch @ 00548688 */
    boost::detail::shared_count::shared_count<Caver::MeshInstance>
              ((shared_count *)&plStack_60,pMVar3);
    boost::detail::sp_enable_shared_from_this(&local_68,pMVar3,pMVar3);
    pMVar3 = local_68;
    local_68 = (MeshInstance *)0x0;
    *in_x8 = (long)pMVar3;
    in_x8[1] = (long)plStack_60;
    InitWithMesh(pMVar3,(shared_ptr *)this,false);
  }
  else {
    plVar5 = *(long **)(*(long *)this + 0x100);
    if ((plVar5 == (long *)0x0) || (lVar4 = plVar5[1], lVar4 == 0)) {
                    /* try { // try from 005486bc to 006486c3 has its CatchHandler @ 0054873c */
      plVar5 = (long *)0x0;
      *in_x8 = 0;
      in_x8[1] = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)this + 0xf8);
      plVar5[1] = lVar4 + 2;
      *in_x8 = lVar6;
      in_x8[1] = (long)plVar5;
      plVar5[1] = lVar4 + 1;
      if (lVar4 + 1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,param_1,param_2);
                    /* catch() { ... } // from try @ 005485d4 with catch @ 00548634 */
        lVar4 = plVar5[2];
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
                    /* try { // try from 00548654 to 0064867b has its CatchHandler @ 00548684 */
      if (lVar6 != 0) goto LAB_005487b0;
    }
                    /* try { // try from 005486cc to 006486cf has its CatchHandler @ 00548704 */
    pMVar3 = operator_new(0xc0);
    MeshInstance(pMVar3);
    local_68 = pMVar3;
    boost::detail::shared_count::shared_count<Caver::MeshInstance>
              ((shared_count *)&plStack_60,pMVar3);
                    /* catch() { ... } // from try @ 005486cc with catch @ 00548704 */
    boost::detail::sp_enable_shared_from_this(&local_68,pMVar3,pMVar3);
    plVar2 = plStack_60;
    pMVar3 = local_68;
    local_68 = (MeshInstance *)0x0;
    *in_x8 = (long)pMVar3;
    in_x8[1] = (long)plStack_60;
    plStack_60 = plVar5;
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* try { // try from 00548728 to 006487cf has its CatchHandler @ 005487d8 */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
                    /* catch() { ... } // from try @ 005486bc with catch @ 0054873c */
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    InitWithMesh(pMVar3,(shared_ptr *)this,true);
    lVar4 = *(long *)this;
    plVar5 = *(long **)(lVar4 + 0x100);
    *(MeshInstance **)(lVar4 + 0xf8) = pMVar3;
    if (plVar5 != plVar2) {
      if (plVar2 != (long *)0x0) {
        plVar2[2] = plVar2[2] + 1;
      }
      if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[2], plVar5[2] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *(long **)(lVar4 + 0x100) = plVar2;
    }
  }
LAB_005487b0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00548834 with catch @ 005487dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00548914 with catch @ 005487dc
                        */
    __stack_chk_fail();
  }
                    /* try { // try from 005487d0 to 006487db has its CatchHandler @ 00548688 */
                    /* catch() { ... } // from try @ 00548728 with catch @ 005487d8 */
  return;
}


