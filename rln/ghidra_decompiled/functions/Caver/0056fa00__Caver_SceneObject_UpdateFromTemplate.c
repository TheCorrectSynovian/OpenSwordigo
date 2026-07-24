/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056fa00
 * Function: Caver::SceneObject::UpdateFromTemplate
 * Signature: undefined __thiscall UpdateFromTemplate(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::UpdateFromTemplate() */

void __thiscall Caver::SceneObject::UpdateFromTemplate(SceneObject *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  SceneObject *local_70;
  SceneObject *local_68;
  long *local_60;
  long *local_58;
  long *plStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x48) == 0) goto LAB_0056fc2c;
  local_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  local_60 = (long *)0x0;
  plVar9 = *(long **)(this + 0xc0);
  plVar1 = *(long **)(this + 200);
  if (plVar9 == plVar1) {
LAB_0056fb0c:
    bVar7 = false;
                    /* try { // try from 0056fb18 to 0066fb3f has its CatchHandler @ 0056fb48 */
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  else {
    do {
      if (((char)((long *)*plVar9)[6] == '\0') &&
         (uVar5 = (**(code **)(*(long *)*plVar9 + 0x30))(), (uVar5 & 1) != 0)) {
                    /* try { // try from 0056fa68 to 0066fa87 has its CatchHandler @ 0056f8a0 */
                    /* catch() { ... } // from try @ 0056f9f8 with catch @ 0056fa70 */
        local_68 = (SceneObject *)(**(code **)(*(long *)*plVar9 + 0x10))();
                    /* catch() { ... } // from try @ 0056f8d0 with catch @ 0056fa74 */
        if (local_68 != (SceneObject *)0x0) {
          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        }
                    /* catch() { ... } // from try @ 0056fb40 with catch @ 0056fa90 */
        if (local_58 == plStack_50) {
          std::
          vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
          ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
                           *)&local_60,local_58,&local_68);
          if (local_68 != (SceneObject *)0x0) goto LAB_0056fad0;
        }
        else {
          *local_58 = (long)local_68;
                    /* try { // try from 0056faa8 to 0066faaf has its CatchHandler @ 0056fb4c */
          plVar4 = local_58 + 1;
          local_58 = local_58 + 1;
          if (local_68 != (SceneObject *)0x0) {
            *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
            local_58 = plVar4;
LAB_0056fad0:
            iVar2 = *(int *)(local_68 + 8);
            *(int *)(local_68 + 8) = iVar2 + -1;
                    /* try { // try from 0056fadc to 0066fae7 has its CatchHandler @ 0056faf4 */
            if (iVar2 + -1 == 0) {
              (**(code **)(*(long *)local_68 + 8))();
            }
          }
        }
      }
      plVar9 = plVar9 + 1;
                    /* catch() { ... } // from try @ 0056fadc with catch @ 0056faf4 */
    } while (plVar1 != plVar9);
    if (this != (SceneObject *)0x0) goto LAB_0056fb0c;
    bVar7 = true;
  }
  plVar9 = *(long **)(this + 0x20);
  pcVar8 = *(code **)(*plVar9 + 0x30);
  if (!bVar7) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  local_70 = this;
  local_68 = this;
                    /* try { // try from 0056fb40 to 0066fb5b has its CatchHandler @ 0056fa90 */
                    /* catch() { ... } // from try @ 0056fb18 with catch @ 0056fb48 */
  (*pcVar8)(plVar9,&local_70,1);
                    /* catch() { ... } // from try @ 0056faa8 with catch @ 0056fb4c */
  plVar1 = local_60;
  plVar4 = local_58;
                    /* try { // try from 0056fb5c to 0066fb67 has its CatchHandler @ 0056fb68 */
  if ((local_70 != (SceneObject *)0x0) &&
     (iVar2 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0056fb5c with catch @ 0056fb68 */
                    /* try { // try from 0056fb6c to 0066fb6f has its CatchHandler @ 0056fb74 */
    (**(code **)(*(long *)local_70 + 8))();
    plVar1 = local_60;
    plVar4 = local_58;
  }
                    /* catch() { ... } // from try @ 0056fb6c with catch @ 0056fb74 */
  for (; plVar6 = local_58, plVar1 != local_58; plVar1 = plVar1 + 1) {
    local_58 = plVar4;
    (**(code **)(*(long *)this + 0x48))(this,plVar1);
    plVar4 = local_58;
    local_58 = plVar6;
  }
  local_58 = plVar4;
                    /* catch() { ... } // from try @ 0056fc0c with catch @ 0056fb9c
                       catch() { ... } // from try @ 0056fcb0 with catch @ 0056fb9c */
  InitWithTemplate(this,(intrusive_ptr *)(this + 0x48));
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_68);
  plVar9 = local_60;
  plVar1 = local_58;
  if ((local_68 != (SceneObject *)0x0) &&
     (iVar2 = *(int *)(local_68 + 8), *(int *)(local_68 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*(long *)local_68 + 8))();
    plVar9 = local_60;
    plVar1 = local_58;
  }
  for (; plVar4 = local_58, plVar9 != local_58; plVar9 = plVar9 + 1) {
    plVar6 = (long *)*plVar9;
    local_58 = plVar1;
    if ((plVar6 != (long *)0x0) &&
       (iVar2 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar2, iVar2 == 0)) {
                    /* try { // try from 0056fc08 to 0066fc0b has its CatchHandler @ 0056fc68 */
                    /* try { // try from 0056fc0c to 0066fc87 has its CatchHandler @ 0056fb9c */
      (**(code **)(*plVar6 + 8))();
    }
    plVar1 = local_58;
    local_58 = plVar4;
  }
  local_58 = plVar1;
  if (local_60 != (long *)0x0) {
    operator_delete(local_60);
  }
LAB_0056fc2c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


