/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004deb84
 * Function: Caver::ItemOverlay::~ItemOverlay
 * Signature: undefined __thiscall ~ItemOverlay(ItemOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemOverlay::~ItemOverlay() */

void __thiscall Caver::ItemOverlay::~ItemOverlay(ItemOverlay *this)

{
  void *pvVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined **)this = PTR_vtable_007e5668 + 0x10;
  FontText::~FontText((FontText *)(this + 0x200));
  if (*(void **)(this + 0x1e0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1e0));
  }
  if (*(void **)(this + 0x1c8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1c8));
  }
  plVar3 = *(long **)(this + 0x1a8);
  if ((plVar3 != (long *)0x0) &&
     (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(void **)(this + 0x188) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x188));
  }
  if (*(void **)(this + 0x170) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x170));
  }
  plVar3 = *(long **)(this + 0x150);
  if ((plVar3 != (long *)0x0) &&
     (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              *)(this + 0x120),*(_Rb_tree_node **)(this + 0x130));
  pvVar5 = *(void **)(this + 0x108);
  pvVar1 = *(void **)(this + 0x110);
  if (pvVar5 != pvVar1) {
    do {
      plVar3 = *(long **)((long)pvVar5 + 8);
      if ((plVar3 != (long *)0x0) && (lVar4 = plVar3[1], plVar3[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar4 = plVar3[2];
        plVar3[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      pvVar5 = (void *)((long)pvVar5 + 0x18);
    } while (pvVar1 != pvVar5);
    pvVar5 = *(void **)(this + 0x108);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  plVar3 = *(long **)(this + 0xf8);
  if ((plVar3 != (long *)0x0) && (lVar4 = plVar3[1], plVar3[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar4 = plVar3[2];
    plVar3[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


