/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc370
 * Function: Caver::TextureLibrary::SetSharedLibrary
 * Signature: undefined __cdecl SetSharedLibrary(TextureLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::SetSharedLibrary(Caver::TextureLibrary*) */

void Caver::TextureLibrary::SetSharedLibrary(TextureLibrary *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)DAT_007ea038;
  if (DAT_007ea038 != (TextureLibrary *)0x0) {
    plVar5 = *(long **)((long)DAT_007ea038 + 0x48);
    plVar1 = *(long **)((long)DAT_007ea038 + 0x50);
    *(undefined **)DAT_007ea038 = PTR_vtable_007e71c8 + 0x10;
    if (plVar5 != plVar1) {
      do {
        plVar4 = (long *)*plVar5;
        if ((plVar4 != (long *)0x0) &&
           (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
                    /* try { // try from 005cc3d0 to 006cc3db has its CatchHandler @ 005cc730 */
          (**(code **)(*plVar4 + 8))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar1 != plVar5);
                    /* try { // try from 005cc3e0 to 006cc3e7 has its CatchHandler @ 005cc72c */
      plVar5 = (long *)plVar3[9];
    }
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 005cc3e8 to 006cc3f3 has its CatchHandler @ 005cc6c8 */
      operator_delete(plVar5);
    }
                    /* try { // try from 005cc3f4 to 006cc407 has its CatchHandler @ 005cc624 */
    std::
    _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
    ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                *)(plVar3 + 1),(_Rb_tree_node *)plVar3[3]);
    operator_delete(plVar3);
  }
  DAT_007ea038 = param_1;
  return;
}


