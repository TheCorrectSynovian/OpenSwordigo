/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055c260
 * Function: Caver::ObjectLibrary::~ObjectLibrary
 * Signature: undefined __thiscall ~ObjectLibrary(ObjectLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::~ObjectLibrary() */

void __thiscall Caver::ObjectLibrary::~ObjectLibrary(ObjectLibrary *this)

{
  void *pvVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  void *pvVar12;
  long *plVar13;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  pvVar12 = *(void **)(this + 0x68);
  pvVar1 = *(void **)(this + 0x70);
                    /* catch() { ... } // from try @ 0055ba80 with catch @ 0055c28c */
                    /* catch() { ... } // from try @ 0055b64c with catch @ 0055c290 */
  if (pvVar12 != pvVar1) {
    do {
      plVar13 = *(long **)((long)pvVar12 + 8);
      if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
                    /* try { // try from 0055c2b0 to 0065c2d7 has its CatchHandler @ 0055c2e0 */
        (**(code **)(*plVar13 + 0x10))(plVar13);
        lVar9 = plVar13[2];
        plVar13[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
                    /* try { // try from 0055c2d8 to 0065c2e3 has its CatchHandler @ 0055b604 */
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      pvVar12 = (void *)((long)pvVar12 + 0x10);
                    /* catch() { ... } // from try @ 0055be9c with catch @ 0055c2e0
                       catch() { ... } // from try @ 0055bf9c with catch @ 0055c2e0
                       catch() { ... } // from try @ 0055c12c with catch @ 0055c2e0
                       catch() { ... } // from try @ 0055c2b0 with catch @ 0055c2e0 */
                    /* catch() { ... } // from try @ 0055c334 with catch @ 0055c2e4
                       catch() { ... } // from try @ 0055c388 with catch @ 0055c2e4
                       catch() { ... } // from try @ 0055c6b4 with catch @ 0055c2e4
                       catch() { ... } // from try @ 0055cb1c with catch @ 0055c2e4
                       catch() { ... } // from try @ 0055cc38 with catch @ 0055c2e4 */
    } while (pvVar1 != pvVar12);
    pvVar12 = *(void **)(this + 0x68);
  }
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  plVar13 = *(long **)(this + 0x50);
  plVar2 = *(long **)(this + 0x58);
  if (plVar13 != plVar2) {
    do {
      plVar6 = (long *)*plVar13;
      if ((plVar6 != (long *)0x0) &&
         (iVar11 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar11, iVar11 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
                    /* try { // try from 0055c328 to 0065c333 has its CatchHandler @ 0055cb34 */
      plVar13 = plVar13 + 1;
    } while (plVar2 != plVar13);
                    /* try { // try from 0055c334 to 0065c383 has its CatchHandler @ 0055c2e4 */
    plVar13 = *(long **)(this + 0x50);
  }
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  pvVar12 = *(void **)(this + 0x38);
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar12 != pvVar1) {
    do {
      plVar13 = *(long **)((long)pvVar12 + 8);
      if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        lVar9 = plVar13[2];
        plVar13[2] = lVar9 + -1;
                    /* try { // try from 0055c384 to 0065c387 has its CatchHandler @ 0055cb20 */
        if (lVar9 + -1 == 0) {
                    /* try { // try from 0055c388 to 0065c3a3 has its CatchHandler @ 0055c2e4 */
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      pvVar12 = (void *)((long)pvVar12 + 0x10);
    } while (pvVar1 != pvVar12);
                    /* try { // try from 0055c3a4 to 0065c3ab has its CatchHandler @ 0055caf4 */
    pvVar12 = *(void **)(this + 0x38);
  }
  if (pvVar12 != (void *)0x0) {
                    /* try { // try from 0055c3ac to 0065c3bf has its CatchHandler @ 0055ca84 */
    operator_delete(pvVar12);
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
              *)(this + 8),*(_Rb_tree_node **)(this + 0x18));
                    /* try { // try from 0055c3c0 to 0065c3cb has its CatchHandler @ 0055ca24 */
                    /* try { // try from 0055c3cc to 0065c3df has its CatchHandler @ 0055c9c0 */
  puVar7 = (undefined *)(*(long *)this + -0x18);
  if (puVar7 != PTR_DAT_007e5de8) {
    piVar10 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(puVar7);
    }
  }
                    /* try { // try from 0055c3e0 to 0065c3ef has its CatchHandler @ 0055c980 */
  if (*(long *)(lVar5 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


