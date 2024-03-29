cmake_minimum_required(VERSION 3.13)
project(mastermind)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(views/command)
include_directories(controllers)
include_directories(models)
include_directories(views)

add_executable(mastermind
        views/command/Command.h
        views/command/ContinueRoundCommand.cpp
        views/command/ContinueRoundCommand.h
        views/command/ExitCommand.cpp
        views/command/ExitCommand.h
        views/command/LoadCommand.cpp
        views/command/LoadCommand.h
        views/command/RedoCommand.cpp
        views/command/RedoCommand.h
        views/command/SaveCommand.cpp
        views/command/SaveCommand.h
        views/command/StartCommand.cpp
        views/command/StartCommand.h
        views/command/UndoCommand.cpp
        views/command/UndoCommand.h
        controllers/ColocateController.cpp
        controllers/ColocateController.h
        controllers/CompositeInGameController.cpp
        controllers/CompositeInGameController.h
        controllers/CompositeInitialController.cpp
        controllers/CompositeInitialController.h
        controllers/ContinueController.cpp
        controllers/ContinueController.h
        controllers/Controller.cpp
        controllers/Controller.h
        controllers/ExitController.cpp
        controllers/ExitController.h
        models/Game.cpp
        models/Game.h
        controllers/Logic.cpp
        controllers/Logic.h
        controllers/StartController.cpp
        controllers/StartController.h
        controllers/State.h
        controllers/UndoController.cpp
        controllers/UndoController.h
        models/Color.cpp
        models/Color.h
        models/Combination.cpp
        models/Combination.h
        models/GameMemento.cpp
        models/GameMemento.h
        models/ProposedCombination.cpp
        models/ProposedCombination.h
        models/Result.cpp
        models/Result.h
        models/SecretCombination.cpp
        models/SecretCombination.h
        views/ContinueView.cpp
        views/ContinueView.h
        controllers/ControllerVisitor.h
        views/models/GameView.cpp
        views/models/GameView.h
        views/menuComposite/InGameMenuView.cpp
        views/menuComposite/InGameMenuView.h
        views/menuComposite/InitialMenuView.cpp
        views/menuComposite/InitialMenuView.h
        views/MastermindView.cpp
        views/MastermindView.h
        views/models/ProposedCombinationView.cpp
        views/models/ProposedCombinationView.h
        views/models/SecretCombinationView.cpp
        views/models/SecretCombinationView.h
        views/StartView.cpp
        views/StartView.h
        CMakeLists.txt
        main.cpp
        Mastermind.cpp
        Mastermind.h controllers/RedoController.cpp controllers/RedoController.h models/Registry.cpp models/Registry.h models/GameMementoInterface.h models/DAO/DAO.h models/DAO/GameDAO.cpp models/DAO/GameDAO.h models/DAO/SecretCombinationDAO.cpp models/DAO/SecretCombinationDAO.h models/DAO/CombinationDAO.h models/DAO/CombinationDAO.cpp models/DAO/ProposedCombinationDAO.cpp models/DAO/ProposedCombinationDAO.h models/DAO/ResultDAO.cpp models/DAO/ResultDAO.h controllers/SaveController.cpp controllers/SaveController.h)
