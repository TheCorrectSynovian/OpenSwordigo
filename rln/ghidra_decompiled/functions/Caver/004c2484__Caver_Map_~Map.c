/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c2484
 * Function: Caver::Map::~Map
 * Signature: undefined __thiscall ~Map(Map * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Map::~Map() */

void __thiscall Caver::Map::~Map(Map *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
              *)(this + 0x48),*(_Rb_tree_node **)(this + 0x58));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
              *)(this + 0x18),*(_Rb_tree_node **)(this + 0x28));
  pvVar3 = *(void **)this;
  pvVar1 = *(void **)(this + 8);
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
    pvVar3 = *(void **)this;
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    return;
  }
  return;
}


