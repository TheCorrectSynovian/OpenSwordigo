/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00546870
 * Function: Caver::MeshBuilder::SetNumTexCoordSets
 * Signature: undefined __thiscall SetNumTexCoordSets(MeshBuilder * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::SetNumTexCoordSets(int) */

void __thiscall Caver::MeshBuilder::SetNumTexCoordSets(MeshBuilder *this,int param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005468cc with catch @ 00546870
                       catch(type#1 @ 00000000) { ... } // from try @ 00546b0c with catch @ 00546870
                        */
  Mesh::SetNumTexCoordSets(*(Mesh **)this,param_1);
  return;
}


