char *leet(char *str)
{
	    char *p = str;
	        char leet[10][2] = {
			        {'a', '4'},
				        {'e', '3'},
					        {'o', '0'},
						        {'t', '7'},
							        {'l', '1'},
								        {'A', '4'},
									        {'E', '3'},
										        {'O', '0'},
											        {'T', '7'},
												        {'L', '1'}
				    };

		    while (*p)
			        {
					        int i = 0;
						        while (i < 10)
								        {
										            if (*p == leet[i][0])
												                {
															                *p = leet[i][1];
																	                break;
																			            }
											                i++;
													        }
							        p++;
								    }
		        return str;
}
