/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055cdb0
 * Function: std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<std::string, Caver::ObjectLibrary::ObjectTemplateInfo, std::less<std::string >,
   std::allocator<std::pair<std::string const, Caver::ObjectLibrary::ObjectTemplateInfo> >
   >::operator[](std::string const&) */

map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
* __thiscall
std::
map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
::operator[](map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
             *this,string *param_1)

{
  map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *pmVar1;
  map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *pmVar2;
  long lVar3;
  long lVar4;
  map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *pmVar5;
  int iVar6;
  uint uVar7;
  map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *pmVar8;
  ulong uVar9;
  size_t sVar10;
  map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *pmVar11;
  void *__s2;
  ulong uVar12;
  undefined1 auVar13 [16];
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pmVar1 = this + 8;
  pmVar8 = pmVar1;
  if (*(map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
        **)(this + 0x10) !=
      (map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar12 = *(ulong *)((long)__s2 + -0x18);
    pmVar11 = pmVar1;
    pmVar5 = *(map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar8 = pmVar5;
                    /* catch() { ... } // from try @ 0055cce0 with catch @ 0055ce0c */
        uVar9 = *(ulong *)((long)*(void **)(pmVar8 + 0x20) + -0x18);
        lVar3 = uVar9 - uVar12;
        sVar10 = uVar12;
        if (uVar9 < uVar12 || lVar3 == 0) {
          sVar10 = uVar9;
        }
        iVar6 = memcmp(*(void **)(pmVar8 + 0x20),__s2,sVar10);
        if (iVar6 != 0) break;
        if (lVar3 < 0x80000000) {
          iVar6 = (int)lVar3;
          if (lVar3 < -0x7fffffff) {
            iVar6 = -0x80000000;
          }
          break;
        }
LAB_0055ce4c:
                    /* try { // try from 0055ce54 to 0065cf2b has its CatchHandler @ 0055cc44 */
                    /* catch() { ... } // from try @ 0055ce2c with catch @ 0055ce58 */
        pmVar11 = pmVar8;
        pmVar5 = *(map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                   **)(pmVar8 + 0x10);
        if (*(map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
              **)(pmVar8 + 0x10) ==
            (map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
             *)0x0) goto LAB_0055ce68;
      }
      if (-1 < iVar6) goto LAB_0055ce4c;
      pmVar2 = pmVar8 + 0x18;
                    /* try { // try from 0055ce2c to 0065ce53 has its CatchHandler @ 0055ce58 */
      pmVar8 = pmVar11;
      pmVar5 = *(map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                 **)pmVar2;
    } while (*(map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
               **)pmVar2 !=
             (map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
              *)0x0);
  }
LAB_0055ce68:
  if (pmVar8 != pmVar1) {
    uVar12 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar10 = *(ulong *)((long)*(void **)(pmVar8 + 0x20) + -0x18);
    lVar3 = uVar12 - sVar10;
    if (uVar12 < sVar10 || lVar3 == 0) {
      sVar10 = uVar12;
    }
    iVar6 = memcmp(*(void **)param_1,*(void **)(pmVar8 + 0x20),sVar10);
    if (iVar6 == 0) {
      if (0x7fffffff < lVar3) goto LAB_0055cf54;
      iVar6 = (int)lVar3;
      if (lVar3 < -0x7fffffff) {
        iVar6 = -0x80000000;
      }
    }
    if (-1 < iVar6) goto LAB_0055cf54;
  }
  FUN_0066a528(&local_88,param_1);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  auVar13 = _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                        *)this,pmVar8,&local_88);
  pmVar11 = auVar13._8_8_;
  pmVar8 = auVar13._0_8_;
                    /* catch() { ... } // from try @ 0055cc70 with catch @ 0055cec4 */
                    /* catch() { ... } // from try @ 0055cd08 with catch @ 0055cec8 */
  if (pmVar11 !=
      (map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
       *)0x0) {
    uVar12 = 1;
    if ((pmVar8 == (map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                    *)0x0) && (pmVar1 != pmVar11)) {
      uVar12 = *(ulong *)((long)local_88 + -0x18);
      sVar10 = *(ulong *)((long)*(void **)(pmVar11 + 0x20) + -0x18);
      lVar3 = uVar12 - sVar10;
      if (uVar12 < sVar10 || lVar3 == 0) {
        sVar10 = uVar12;
      }
      uVar7 = memcmp(local_88,*(void **)(pmVar11 + 0x20),sVar10);
      uVar12 = (ulong)uVar7;
      if ((uVar7 == 0) && (uVar12 = 0, lVar3 < 0x80000000)) {
        uVar7 = (uint)lVar3;
        if (lVar3 < -0x7fffffff) {
          uVar7 = 0x80000000;
        }
        uVar12 = (ulong)uVar7;
      }
      uVar12 = uVar12 >> 0x1f;
    }
    pmVar8 = (map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
              *)_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                                  *)this,(pair *)&local_88);
                    /* try { // try from 0055cf2c to 0065cf57 has its CatchHandler @ 0055cf2c
                       catch() { ... } // from try @ 0055cf2c with catch @ 0055cf2c
                       catch() { ... } // from try @ 0055cf7c with catch @ 0055cf2c
                       catch() { ... } // from try @ 0055d02c with catch @ 0055cf2c
                       catch() { ... } // from try @ 0055d13c with catch @ 0055cf2c */
    FUN_0064c8a0(uVar12,pmVar8,pmVar11,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair
            ((pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo> *)&local_88);
LAB_0055cf54:
                    /* try { // try from 0055cf58 to 0065cf6b has its CatchHandler @ 0055d1ac */
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 0055cf70 to 0065cf7b has its CatchHandler @ 0055d144 */
                    /* try { // try from 0055cf7c to 0065cfc7 has its CatchHandler @ 0055cf2c */
    return pmVar8 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


