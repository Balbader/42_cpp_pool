# include "PMergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2) {
		std::cerr << "Error: Usage is ./PMergeMe <numbers>" << std::endl;
		return (ERROR);
	}

	try {
		PMergeMe PME;
		PME.checkInput(argc, argv);
		
		double startTime = getTime();
		PME.fillVector(argc, argv);
		PME.printBefore();
		PME.setVector(PME.cutAndSort(PME.getVector()));
		PME.printAfter();
		PME.printTime(VECTOR, getTime() - startTime);
	
		startTime = getTime();
		PME.fillDeque(argc, argv);
		PME.setDeque(PME.cutAndSort(PME.getDeque()));
		PME.printTime(DEQUE, getTime() - startTime);
	} catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << '\n';
	}

	return (SUCCESS);
}
