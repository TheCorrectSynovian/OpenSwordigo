/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052b464
 * Function: std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::~vector
 * Signature: undefined __thiscall ~vector(vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<boost::shared_ptr<Caver::GUIButton>,
   std::allocator<boost::shared_ptr<Caver::GUIButton> > >::~vector() */

void __thiscall
std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
::~vector(vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>
          *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0052b414 with catch @ 0052b500
                        */
  return;
}


