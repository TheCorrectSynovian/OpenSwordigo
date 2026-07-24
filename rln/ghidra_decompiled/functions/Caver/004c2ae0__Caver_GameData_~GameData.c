/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c2ae0
 * Function: Caver::GameData::~GameData
 * Signature: undefined __thiscall ~GameData(GameData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::~GameData() */

void __thiscall Caver::GameData::~GameData(GameData *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = *(void **)(this + 0xd0);
  pvVar1 = *(void **)(this + 0xd8);
  if (pvVar3 != pvVar1) {
    do {
      plVar4 = *(long **)((long)pvVar3 + 8);
      if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar2 = plVar4[2];
        plVar4[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      pvVar3 = (void *)((long)pvVar3 + 0x10);
    } while (pvVar1 != pvVar3);
    pvVar3 = *(void **)(this + 0xd0);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
              *)(this + 0xa0),*(_Rb_tree_node **)(this + 0xb0));
  pvVar3 = *(void **)(this + 0x88);
  pvVar1 = *(void **)(this + 0x90);
  if (pvVar3 != pvVar1) {
    do {
      plVar4 = *(long **)((long)pvVar3 + 8);
      if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar2 = plVar4[2];
        plVar4[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      pvVar3 = (void *)((long)pvVar3 + 0x10);
    } while (pvVar1 != pvVar3);
    pvVar3 = *(void **)(this + 0x88);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
              *)(this + 0x58),*(_Rb_tree_node **)(this + 0x68));
  plVar4 = *(long **)(this + 0x50);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  pvVar3 = *(void **)(this + 0x30);
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar3 != pvVar1) {
    do {
      plVar4 = *(long **)((long)pvVar3 + 8);
      if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar2 = plVar4[2];
        plVar4[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      pvVar3 = (void *)((long)pvVar3 + 0x10);
    } while (pvVar1 != pvVar3);
    pvVar3 = *(void **)(this + 0x30);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>>
              *)this,*(_Rb_tree_node **)(this + 0x10));
  return;
}


