/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056c514
 * Function: Caver::SceneGrid::~SceneGrid
 * Signature: undefined __thiscall ~SceneGrid(SceneGrid * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::~SceneGrid() */

void __thiscall Caver::SceneGrid::~SceneGrid(SceneGrid *this)

{
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector
            ((FastVector<boost::shared_ptr<Caver::SceneGridLayer>> *)this);
  return;
}


