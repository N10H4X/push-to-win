# Push to Win

A console-based puzzle game written in C where players push boxes to designated targets across three challenging levels.

## Game Overview

"Push to Win" is a Sokoban-style puzzle game where you control a character that can push boxes (`@`) onto target positions (`x`) to complete each level. The game features three progressively challenging levels with different mechanics and obstacles.

## Authors

- John Anthony A. Dilao
- Clark Justine A. Lesigues
- Michel Angelo F. Malaqui
- Blane Georgie A. Jaro

## How to Run

### Prerequisites
- A C compiler (GCC, Clang, or Visual Studio on Windows)
- Terminal/Command Prompt access

### Compilation and Execution

#### Windows (using GCC/MinGW):
```powershell
gcc gameVer9.c -o push-to-win.exe
./push-to-win.exe
```

#### Windows (using Visual Studio Developer Command Prompt):
```cmd
cl gameVer9.c /Fe:push-to-win.exe
push-to-win.exe
```

#### Linux/macOS:
```bash
gcc gameVer9.c -o push-to-win
./push-to-win
```

## How to Play

### Starting the Game
1. Run the compiled executable
2. When prompted, enter a single character to represent your player (e.g., `P`, `@`, `*`, etc.)
3. Press Enter to confirm your choice

### Controls
- **W** - Move up
- **A** - Move left  
- **S** - Move down
- **D** - Move right
- **F** - Quit game (force exit)

After each move, press **Enter** to confirm the action.

### Game Elements

| Symbol | Description |
|--------|-------------|
| `#` | Wall (impassable) |
| `-` | Empty space (walkable) |
| `@` | Box (pushable) |
| `x` | Target position for boxes |
| `o` / `O` | Switch/pressure plates |
| `|` | Barriers (may be removed by switches) |
| `_` | Special floor tiles |
| Your character | Player (chosen at start) |

### Objective
Push all boxes (`@`) onto the target positions (`x`) to complete each level. Some levels have additional mechanics:

## Level Descriptions

### Level 1
- **Objective**: Push 2 boxes onto their target positions
- **Special Mechanics**: 
  - Step on the switch (`O`) to remove barriers (`|`)
  - Targets are marked with `x`

### Level 2  
- **Objective**: Push 1 box onto the target position
- **Special Mechanics**:
  - Multiple switches (`O`) control different barriers
  - More complex barrier system with `|` symbols

### Level 3
- **Objective**: Push 1 box onto the target position
- **Special Mechanics**:
  - Surrounded by a pattern of switches (`o`)
  - Single switch mechanism to unlock the path
  - Most challenging level with tight spaces

## Game Rules

1. **Movement**: You can only move to empty spaces (`-`), target positions (`x`), or switches (`o`/`O`)
2. **Pushing Boxes**: Walk into a box to push it in that direction (if there's space)
3. **Walls**: Cannot pass through walls (`#`) or barriers (`|` when active)
4. **Winning**: Complete each level by placing all boxes on their target positions
5. **Switches**: Step on switches to activate mechanisms (remove barriers, open paths)

## Tips for Success

1. **Plan Ahead**: Think several moves in advance before pushing boxes
2. **Box Positioning**: Be careful not to push boxes into corners or against walls where they can't be retrieved
3. **Switch Strategy**: In levels with switches, understand which switch controls which barriers
4. **Target Priority**: Focus on getting boxes to targets systematically rather than randomly
5. **Restart Strategy**: If you get stuck, you can quit (`F`) and restart the game

## Technical Notes

- The game uses ANSI escape codes to clear the screen between moves
- Grid size is 10x10 for all levels
- The game runs in a continuous loop until all objectives are completed or the player quits

## License

This project is available under the terms specified in the LICENSE file.

---

**Enjoy playing Push to Win!** 🎮📦
