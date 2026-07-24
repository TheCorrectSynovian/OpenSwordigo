/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bdcc8
 * Function: Caver::StoreController_Android::PurchaseProduct
 * Signature: undefined __thiscall PurchaseProduct(StoreController_Android * this, shared_ptr * param_1, TargetAction param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&,
   Caver::TargetAction<void (std::string const&, bool, std::string const&)>) */

void __thiscall
Caver::StoreController_Android::PurchaseProduct
          (StoreController_Android *this,undefined8 *param_1,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_0066a528(local_58,*param_1);
                    /* try { // try from 005bdd08 to 006bdd27 has its CatchHandler @ 005bdd08
                       catch() { ... } // from try @ 005bdd08 with catch @ 005bdd08
                       catch() { ... } // from try @ 005bdd30 with catch @ 005bdd08
                       catch() { ... } // from try @ 005bdd78 with catch @ 005bdd08 */
  puVar5 = (undefined8 *)
           std::
           map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
           ::operator[]((map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                         *)(this + 0x40),(string *)local_58);
  plVar6 = (long *)puVar5[1];
  *puVar5 = *param_3;
  plVar10 = (long *)param_3[1];
                    /* try { // try from 005bdd28 to 006bdd2f has its CatchHandler @ 005bdd60 */
  if (plVar10 != plVar6) {
    if (plVar10 != (long *)0x0) {
                    /* try { // try from 005bdd30 to 006bdd6b has its CatchHandler @ 005bdd08 */
      plVar10[2] = plVar10[2] + 1;
    }
    if ((plVar6 != (long *)0x0) && (lVar7 = plVar6[2], plVar6[2] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x18))();
    }
    puVar5[1] = plVar10;
  }
                    /* catch() { ... } // from try @ 005bdd28 with catch @ 005bdd60 */
  boost::function<void(std::string_const&,bool,std::string_const&)>::operator=
            ((function<void(std::string_const&,bool,std::string_const&)> *)(puVar5 + 2),
             (function *)(param_3 + 2));
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 005bdd6c to 006bdd6f has its CatchHandler @ 005bdd70 */
                    /* catch() { ... } // from try @ 005bdd6c with catch @ 005bdd70 */
                    /* try { // try from 005bdd74 to 006bdd77 has its CatchHandler @ 005bdd80 */
                    /* try { // try from 005bdd78 to 006bdd83 has its CatchHandler @ 005bdd08 */
                    /* catch() { ... } // from try @ 005bdd74 with catch @ 005bdd80 */
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 005bdd9c with catch @ 005bddd4 */
    piVar8 = (int *)(local_58[0] + -8);
                    /* try { // try from 005bdddc to 006bdde3 has its CatchHandler @ 005bddf0 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 005bde34 with catch @ 005bde18 */
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 005bddec to 006bddef has its CatchHandler @ 005bde00 */
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
                    /* try { // try from 005bde2c to 006bde33 has its CatchHandler @ 005bde50 */
      operator_delete((undefined *)(local_58[0] + -0x18));
                    /* try { // try from 005bde34 to 006bde63 has its CatchHandler @ 005bde18 */
    }
  }
                    /* catch() { ... } // from try @ 005bdda4 with catch @ 005bdd84
                       catch() { ... } // from try @ 005bde08 with catch @ 005bdd84 */
  FUN_0066a528(local_58,*param_1);
  AndroidPurchaseStoreProduct((string *)local_58);
                    /* try { // try from 005bdd9c to 006bdda3 has its CatchHandler @ 005bddd4 */
                    /* try { // try from 005bdda4 to 006bdddb has its CatchHandler @ 005bdd84 */
  if ((undefined *)(local_58[0] + -0x18) != puVar4) {
    piVar8 = (int *)(local_58[0] + -8);
                    /* catch() { ... } // from try @ 005bddec with catch @ 005bde00 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
                    /* try { // try from 005bde04 to 006bde07 has its CatchHandler @ 005bde10 */
        iVar9 = *piVar8;
                    /* try { // try from 005bde08 to 006bde13 has its CatchHandler @ 005bdd84 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 005bde04 with catch @ 005bde10 */
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
                    /* catch() { ... } // from try @ 005bde2c with catch @ 005bde50 */
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


