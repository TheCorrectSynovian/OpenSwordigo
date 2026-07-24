/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583750
 * Function: std::_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::~_List_base
 * Signature: undefined __thiscall ~_List_base(_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,
   std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource> > >::~_List_base() */

void __thiscall
std::
_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
::~_List_base(_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
              *this)

{
  int iVar1;
  _List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
  *p_Var2;
  long *plVar3;
  _List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
  *p_Var4;
  
                    /* catch() { ... } // from try @ 005811cc with catch @ 0058375c
                       catch() { ... } // from try @ 005811e0 with catch @ 0058375c
                       catch() { ... } // from try @ 005813b8 with catch @ 0058375c */
  p_Var2 = *(_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
             **)this;
  while (p_Var2 != this) {
    plVar3 = *(long **)(p_Var2 + 0x10);
    p_Var4 = *(_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>
               **)p_Var2;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    operator_delete(p_Var2);
    p_Var2 = p_Var4;
  }
  return;
}


