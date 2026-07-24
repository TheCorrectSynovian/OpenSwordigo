/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cd7dc
 * Function: Caver::TextureLibrary::RefreshUnusedTexturesList
 * Signature: undefined __thiscall RefreshUnusedTexturesList(TextureLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::RefreshUnusedTexturesList() */

void __thiscall Caver::TextureLibrary::RefreshUnusedTexturesList(TextureLibrary *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
  *pvVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  TextureLibrary *pTVar10;
  Texture *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar6 = (vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
            *)(this + 0x48);
  plVar9 = *(long **)(this + 0x50);
  plVar8 = *(long **)pvVar6;
  for (plVar7 = plVar8; plVar9 != plVar7; plVar7 = plVar7 + 1) {
    plVar5 = (long *)*plVar7;
    if ((plVar5 != (long *)0x0) &&
       (iVar4 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  pTVar10 = *(TextureLibrary **)(this + 0x20);
  *(long **)(this + 0x50) = plVar8;
  if (this + 0x10 != pTVar10) {
    do {
                    /* catch() { ... } // from try @ 005cd968 with catch @ 005cd860
                       catch() { ... } // from try @ 005cdad4 with catch @ 005cd860 */
      local_50 = *(Texture **)(pTVar10 + 0x28);
      if (local_50 != (Texture *)0x0) {
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      }
      if ((((*(long *)(local_50 + 0x70) == 0) && (*(int *)(local_50 + 0x38) != 0)) &&
          (iVar4 = Texture::TextureRetainCount(local_50), iVar4 == 2)) &&
         (local_50[0xa0] == (Texture)0x0)) {
        puVar1 = *(undefined8 **)(this + 0x50);
                    /* try { // try from 005cd8e0 to 006cd8e3 has its CatchHandler @ 005cda2c */
        if (puVar1 == *(undefined8 **)(this + 0x58)) {
          std::
          vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
          ::_M_insert_aux(pvVar6,puVar1,&local_50);
        }
        else {
          *puVar1 = local_50;
          if (local_50 != (Texture *)0x0) {
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          }
          *(undefined8 **)(this + 0x50) = puVar1 + 1;
                    /* try { // try from 005cd904 to 006cd907 has its CatchHandler @ 005cda1c */
        }
      }
      if ((local_50 != (Texture *)0x0) &&
         (iVar4 = *(int *)(local_50 + 8), *(int *)(local_50 + 8) = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*(long *)local_50 + 8))();
      }
      pTVar10 = (TextureLibrary *)FUN_0064c640(pTVar10);
    } while (this + 0x10 != pTVar10);
    plVar8 = *(long **)(this + 0x50);
  }
  plVar7 = *(long **)pvVar6;
  if (plVar7 != plVar8) {
                    /* try { // try from 005cd940 to 006cd943 has its CatchHandler @ 005cd9e8 */
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
              (plVar7,plVar8,LZCOUNT((long)plVar8 - (long)plVar7 >> 3) * -2 + 0x7e,
               PTR_TextureLoadTimeSortPredicate_007e4c08);
    if ((long)plVar8 - (long)plVar7 < 0x81) {
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
                (plVar7,plVar8,PTR_TextureLoadTimeSortPredicate_007e4c08);
    }
    else {
      plVar9 = plVar7 + 0x10;
                    /* try { // try from 005cd964 to 006cd967 has its CatchHandler @ 005cd9e0 */
                    /* try { // try from 005cd968 to 006cda0b has its CatchHandler @ 005cd860 */
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
                (plVar7,plVar9,PTR_TextureLoadTimeSortPredicate_007e4c08);
      puVar3 = PTR_TextureLoadTimeSortPredicate_007e4c08;
      for (; plVar9 != plVar8; plVar9 = plVar9 + 1) {
        std::
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
                  (plVar9,puVar3);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


