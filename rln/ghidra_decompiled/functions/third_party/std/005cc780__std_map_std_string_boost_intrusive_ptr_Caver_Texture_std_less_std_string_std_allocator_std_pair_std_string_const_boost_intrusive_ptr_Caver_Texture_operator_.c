/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc780
 * Function: std::map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, boost::intrusive_ptr<Caver::Texture>, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::intrusive_ptr<Caver::Texture> > >
   >::operator[](std::string const&) */

map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
* __thiscall
std::
map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
::operator[](map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
             *this,string *param_1)

{
  map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *pmVar1;
  map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *pmVar7;
  int iVar8;
  uint uVar9;
  map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *pmVar10;
  ulong uVar11;
  int *piVar12;
  size_t sVar13;
  map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *pmVar14;
  void *__s2;
  ulong uVar15;
  undefined1 auVar16 [16];
  void *local_80;
  long *local_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pmVar1 = this + 8;
  pmVar10 = pmVar1;
  if (*(map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
        **)(this + 0x10) !=
      (map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
                    /* try { // try from 005cc7c8 to 006cc7cb has its CatchHandler @ 005cc7ec */
                    /* try { // try from 005cc7cc to 006cc7ef has its CatchHandler @ 005cc348 */
    uVar15 = *(ulong *)((long)__s2 + -0x18);
    pmVar14 = pmVar1;
    pmVar7 = *(map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar10 = pmVar7;
        uVar11 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
        lVar5 = uVar11 - uVar15;
        sVar13 = uVar15;
        if (uVar11 < uVar15 || lVar5 == 0) {
          sVar13 = uVar11;
        }
                    /* catch() { ... } // from try @ 005cc7c8 with catch @ 005cc7ec */
        iVar8 = memcmp(*(void **)(pmVar10 + 0x20),__s2,sVar13);
                    /* catch() { ... } // from try @ 005cc9a4 with catch @ 005cc7f0
                       catch() { ... } // from try @ 005ccb2c with catch @ 005cc7f0 */
        if (iVar8 != 0) break;
        if (lVar5 < 0x80000000) {
          iVar8 = (int)lVar5;
          if (lVar5 < -0x7fffffff) {
            iVar8 = -0x80000000;
          }
          break;
        }
LAB_005cc81c:
        pmVar14 = pmVar10;
        pmVar7 = *(map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                   **)(pmVar10 + 0x10);
        if (*(map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
              **)(pmVar10 + 0x10) ==
            (map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
             *)0x0) goto LAB_005cc838;
      }
      if (-1 < iVar8) goto LAB_005cc81c;
      pmVar2 = pmVar10 + 0x18;
      pmVar10 = pmVar14;
      pmVar7 = *(map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                 **)pmVar2;
    } while (*(map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
               **)pmVar2 !=
             (map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
              *)0x0);
  }
LAB_005cc838:
                    /* try { // try from 005cc840 to 006cc867 has its CatchHandler @ 005cc9f0 */
  if (pmVar10 != pmVar1) {
    uVar15 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar13 = *(ulong *)((long)*(void **)(pmVar10 + 0x20) + -0x18);
    lVar5 = uVar15 - sVar13;
    if (uVar15 < sVar13 || lVar5 == 0) {
      sVar13 = uVar15;
    }
    iVar8 = memcmp(*(void **)param_1,*(void **)(pmVar10 + 0x20),sVar13);
    if (iVar8 == 0) {
      if (0x7fffffff < lVar5) goto LAB_005cc954;
                    /* try { // try from 005cc9a4 to 006cca23 has its CatchHandler @ 005cc7f0 */
      iVar8 = (int)lVar5;
      if (lVar5 < -0x7fffffff) {
        iVar8 = -0x80000000;
      }
    }
    if (-1 < iVar8) goto LAB_005cc954;
  }
  FUN_0066a528(&local_80,param_1);
  local_78 = (long *)0x0;
  auVar16 = _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                        *)this,pmVar10,&local_80);
  pmVar14 = auVar16._8_8_;
  pmVar10 = auVar16._0_8_;
  if (pmVar14 !=
      (map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
       *)0x0) {
    uVar15 = 1;
                    /* try { // try from 005cc8a4 to 006cc8cb has its CatchHandler @ 005cc9e0 */
    if ((pmVar10 ==
         (map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
          *)0x0) && (pmVar1 != pmVar14)) {
      uVar15 = *(ulong *)((long)local_80 + -0x18);
      sVar13 = *(ulong *)((long)*(void **)(pmVar14 + 0x20) + -0x18);
      lVar5 = uVar15 - sVar13;
      if (uVar15 < sVar13 || lVar5 == 0) {
        sVar13 = uVar15;
      }
      uVar9 = memcmp(local_80,*(void **)(pmVar14 + 0x20),sVar13);
      uVar15 = (ulong)uVar9;
      if ((uVar9 == 0) && (uVar15 = 0, lVar5 < 0x80000000)) {
        uVar9 = (uint)lVar5;
        if (lVar5 < -0x7fffffff) {
          uVar9 = 0x80000000;
        }
        uVar15 = (ulong)uVar9;
      }
      uVar15 = uVar15 >> 0x1f;
    }
                    /* try { // try from 005cc8ec to 006cc913 has its CatchHandler @ 005cc9d0 */
    pmVar10 = (map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
               *)_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                 ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                                   *)this,(pair *)&local_80);
    FUN_0064c8a0(uVar15,pmVar10,pmVar14,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  if ((local_78 != (long *)0x0) &&
     (iVar8 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar8, iVar8 == 0)) {
                    /* try { // try from 005cc934 to 006cc95b has its CatchHandler @ 005cc9c0 */
    (**(code **)(*local_78 + 8))();
  }
  if ((undefined *)((long)local_80 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 005cc97c with catch @ 005cc9b8 */
    piVar12 = (int *)((long)local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 005cc934 with catch @ 005cc9c0 */
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 005cc8a4 with catch @ 005cc9e0 */
    if (iVar8 < 1) {
      operator_delete((undefined *)((long)local_80 + -0x18));
                    /* catch() { ... } // from try @ 005cc840 with catch @ 005cc9f0 */
    }
  }
LAB_005cc954:
  if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 005cc97c to 006cc9a3 has its CatchHandler @ 005cc9b8 */
    return pmVar10 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


