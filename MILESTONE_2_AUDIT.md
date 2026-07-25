# OpenSwordigo Milestone 2 — Evidence & Rendering Audit Report

## Executive Summary
**Milestone 2 is COMPLETE & VERIFIED**. OpenSwordigo renders real Swordigo scenes (`town_herohouse.scene`, `hero.scene`) in a native SDL3 / OpenGL ES 2.0 window without executing `libswordigo.so`, requiring ARM CPU emulation, or using JNI.

Following the exact block stream reader specification from the PowerVR SDK (`Native_SDK-master`), OpenSwordigo decodes 3D meshes directly from real PowerVR `.POD` binary assets.

---

## 1. Real Asset Parsing & Mesh Statistics

| POD Model File | Vertices | Faces | Indices | Stride | Interleaved |
| :--- | :--- | :--- | :--- | :--- | :--- |
| `fountain.POD` | 1,244 | 476 | 1,428 | 12 bytes | No |
| `treewall1.POD` | 668 | 364 | 1,092 | 32 bytes | Yes |
| `critter_konna_green.POD` | 376 | 466 | 1,398 | 40 bytes | Yes |
| `treewall2.POD` | 355 | 208 | 624 | 32 bytes | Yes |
| `boss1_shadowform.POD` | 344 | 290 | 870 | 40 bytes | Yes |
| `statue_knight.POD` | 329 | 263 | 789 | 12 bytes | No |
| `bed.POD` | 212 | 92 | 276 | 32 bytes | Yes |
| `oldman_ghost.POD` | 191 | 246 | 738 | 40 bytes | Yes |
| `npc_male3.POD` | 192 | 218 | 654 | 40 bytes | Yes |
| `torch.POD` | 189 | 88 | 264 | 32 bytes | Yes |
| `fencetrap1.POD` | 170 | 200 | 600 | 12 bytes | No |
| `bookshelf.POD` | 168 | 84 | 252 | 32 bytes | Yes |
| `chair1.POD` | 168 | 84 | 252 | 32 bytes | Yes |
| `treek2.POD` | 134 | 86 | 258 | 32 bytes | Yes |
| `rock1.POD` | 108 | 180 | 540 | 12 bytes | No |
| `rock2.POD` | 108 | 180 | 540 | 12 bytes | No |
| `house2.POD` | 96 | 108 | 324 | 32 bytes | Yes |
| `town_house1.POD` | 96 | 108 | 324 | 12 bytes | No |
| `bank.POD` | 96 | 108 | 324 | 12 bytes | No |

---

## 2. Updated Runtime Metrics (town_herohouse.scene)

| Metric | Value |
| :--- | :--- |
| **Total SceneObjects Loaded** | 326 |
| **Renderable SceneObjects** | 132 |
| **BackgroundComponents** | 1 (`housetiles_2x.pvr`) |
| **ModelComponents (`Model`)** | 131 |
| **GroundMeshComponents** | 48 |
| **POD Models Loaded** | 28 real PowerVR `.POD` models parsed |
| **Draw Calls per Frame** | 204 |
| **Triangles Rendered per Frame** | **11,336** (real 3D model geometry) |
| **Captured Frame Artifact** | [rendered_frame.png](file:///home/quantumcreeper/.gemini/antigravity/brain/824dc72a-6fff-4a97-84bc-a0ab0d5b4d19/rendered_frame.png) |

---

## 3. Architecture & Compliance
- **VAO Independence**: Dual-path architecture (`useVAO = true` optional desktop optimization, plus pure non-VAO GLES2 fallback attribute binding path using `glVertexAttribPointer` without VAO bound).
- **GLES2 Compatibility**: Standard GLSL ES 1.00 (`#version 100`) attributes, uniforms, texture units, depth testing, blending.
- **Milestone 1 Preservation**: `./build/openswordigo_native town_herohouse.scene` passes 100% cleanly.
