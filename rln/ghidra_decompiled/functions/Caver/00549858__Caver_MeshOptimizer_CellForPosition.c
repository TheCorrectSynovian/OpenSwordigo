/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00549858
 * Function: Caver::MeshOptimizer::CellForPosition
 * Signature: undefined __thiscall CellForPosition(MeshOptimizer * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshOptimizer::CellForPosition(Caver::Vector3 const&) */

undefined8 __thiscall Caver::MeshOptimizer::CellForPosition(MeshOptimizer *this,Vector3 *param_1)

{
                    /* try { // try from 0054986c to 00649877 has its CatchHandler @ 0054998c */
                    /* try { // try from 00549878 to 0064990f has its CatchHandler @ 0054965c */
  return CONCAT44((int)((*(float *)(param_1 + 4) - *(float *)(this + 0x34)) /
                       *(float *)(this + 0x50)),
                  (int)((*(float *)param_1 - *(float *)(this + 0x30)) / *(float *)(this + 0x4c)));
}


