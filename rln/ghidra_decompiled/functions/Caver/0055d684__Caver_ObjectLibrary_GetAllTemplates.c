/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055d684
 * Function: Caver::ObjectLibrary::GetAllTemplates
 * Signature: undefined __thiscall GetAllTemplates(ObjectLibrary * this, vector * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,
   std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate> > >*, bool) */

void __thiscall
Caver::ObjectLibrary::GetAllTemplates(ObjectLibrary *this,vector *param_1,bool param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ObjectLibrary *pOVar5;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0055d684 to 0065d6ab has its CatchHandler @ 0055d81c */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0055d6b4 to 0065d6bf has its CatchHandler @ 0055d7cc */
  for (pOVar5 = *(ObjectLibrary **)(this + 0x20); pOVar5 != this + 0x10;
      pOVar5 = (ObjectLibrary *)FUN_0064c640(pOVar5)) {
    TemplateForName((string *)this,(bool)((char)pOVar5 + ' '));
    puVar4 = *(undefined8 **)(param_1 + 8);
                    /* try { // try from 0055d6e0 to 0065d707 has its CatchHandler @ 0055d81c */
    if (puVar4 == *(undefined8 **)(param_1 + 0x10)) {
      std::
      vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>
      ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>
                       *)param_1,puVar4,&local_50);
    }
    else {
      *puVar4 = local_50;
      if (local_50 != (long *)0x0) {
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      }
      *(undefined8 **)(param_1 + 8) = puVar4 + 1;
                    /* try { // try from 0055d708 to 0065d7ef has its CatchHandler @ 0055d5c0 */
    }
    if ((local_50 != (long *)0x0) &&
       (iVar2 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
  }
  if (param_2) {
    puVar1 = *(undefined8 **)(this + 0x40);
    for (puVar4 = *(undefined8 **)(this + 0x38); puVar4 != puVar1; puVar4 = puVar4 + 2) {
      GetAllTemplates((ObjectLibrary *)*puVar4,param_1,true);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


